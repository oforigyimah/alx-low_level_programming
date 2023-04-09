#include <fcntl.h>
#include "main.h"
#include <stdio.h>
#include <string.h>
#include <unistd.h>

/**
 * create_file - creates a file
 * @filename: name of the file to creates
 * @text_content: a NULL terminated string to write to the file
 *
 * Return: 1 on success, -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
		int fd;
		int stat;
		char null_char = '\0';

		if (!filename)
			return (-1);
		fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
		if (fd == -1)
			return (-1);
		if (!text_content)
			stat = write(fd, &null_char, 1);
		else
			stat = write(fd, text_content, strlen(text_content) + 1);
		if (stat == -1)
			return (-1);
		return (1);
}

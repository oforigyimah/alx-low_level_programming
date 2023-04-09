#include "main.h"
#include <asm-generic/fcntl.h>
#include <stdio.h>
#include <unistd.h>

/**
 * append_text_to_file - appends tex at the end of a file
 * @filename: name of the file
 * @text_content: NULL terminater string to add at the end of the file
 * Return: 1 on success, -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
		int fd;
		int stat;
		int len = 0;

		if (!filename)
			return (-1);
		fd = open(filename, O_WRONLY | O_APPEND);
		if (fd == -1)
			return (-1);
		while (text_content[len++])
			{}
		stat = write(fd, text_content, len);
		if (stat == -1)
			return (-1);
		return (1);
}

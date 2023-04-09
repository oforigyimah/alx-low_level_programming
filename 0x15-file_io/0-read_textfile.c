#include <fcntl.h>
#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>

/**
 * read_textfile - reads a text file and print it to POSIX standard output
 * @filename: the name of the desire file
 * @letters: size of bytes to print
 *
 * Return: successful number of written bytes else 0 when there is error
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
		int fd;
		char *buffer;
		int bytes_read;
		ssize_t count;

		if (!filename)
			return (0);
		fd = open(filename, O_RDONLY);
		if (fd == -1)
			return (0);
		buffer = malloc(sizeof(char) * letters);
		if (!buffer)
			return (0);
		bytes_read = read(fd, buffer, letters);
		if (bytes_read == -1)
			return (0);
		count = write(STDOUT_FILENO, buffer, bytes_read);
		free(buffer);
		close(fd);

		return (count);
}

#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * main - copy content from one to another
 * @ac - number of args
 * @av - args
 *
 * Return: 0 success
 */

int main(int ac, char **av)
{
		int fd_from, fd_to, len, read_buffer, sts;
		char *buffer;

		if (ac != 3)
			{
			dprintf(2, "Usage: cp file_from file_to\n");
			exit(97);
			}
		fd_from = open(av[1], O_RDONLY);
		if (fd_from == -1)
			{
			dprintf(2, "Error: Can't read from %s\n", av[1]);
			exit(98);
			}
		fd_to = open(av[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
		if (fd_to == -1)
			{
				dprintf(2, "Error: Can't write to %s\n", av[2]);
				exit(99);
			}

		len = 1024;
		while (len)
			{
			buffer = malloc(sizeof(char) * len + 1);
			read_buffer = read(fd_from, buffer, (size_t)len);
			if (read_buffer == -1)
			{
			dprintf(2, "Error: Can't read from file %s\n", av[1]);
			exit(98);
			}
			sts = write(fd_to, buffer, read_buffer);
			if (sts == -1)
			{
			dprintf(2, "Error: Can't write to %s\n", av[2]);
			exit(99);
			}
			if (read_buffer < len)
				break;
			}
		sts = close(fd_from);
		if (sts != 0)
			{
			dprintf(2, "Error: Can't close fd %d/n", sts);
			exit(100);
			}
		sts = close(fd_to);
		if (sts != 0)
			{
			dprintf(2, "Error: Can't close fd %d/n", sts);
			exit(100);
			}
		return (0);
}

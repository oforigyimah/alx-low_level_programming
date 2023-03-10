#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiply two int
 * @argc: size of agrv
 * @argv: array of args
 *
 * Return: 0 on success 1 on Error
 */

int main(int argc, char *argv[])
{
		if (argc < 2)
			{
			printf("Error\n");
			return (1);
			}
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
		return (0);
}

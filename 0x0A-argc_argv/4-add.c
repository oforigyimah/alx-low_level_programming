#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

/**
 * main - add all args
 * @argc: size of argv
 * @argv: array of args
 *
 * Return: 0 on success and 1 on failure
 */

int main(int argc, char *argv[])
{
		int i, sum = 0;

		if (argc < 2)
			{
			printf("0\n");
			return (0);
			}
		for (i = 1; i < argc; i++)
			{
			if (isdigit(*argv[i]))
				{
				sum += atoi(argv[i]);
				}
			else
				{
				printf("Error\n");
				return (-1);
				}
			}
		printf("%d\n", sum);
		return (0);
}

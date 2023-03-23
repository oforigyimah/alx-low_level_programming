#include <stdio.h>
#include <stdlib.h>

/**
 * op - prints opcodes
 * @n: number of bytes
 *
 * Return: void
 */

void op(int n)
{
		int i;
		unsigned char *a = (unsigned char *)&op;

		for (i = 0; i < n; i++)
			{
			printf("%02hhx ", *(a + 1));
			}
		printf("\n");
}

/**
 * main - run op fun
 * @argc: args count
 * @argv: array of args
 *
 * Return: 0
 */

int main(int argc, char **argv)
{
		int n;

		if (argc != 2)
			{
			printf("Error\n");
			return (1);
			}
		n = atoi(argv[1]);
		if (n < 0)
			{
			printf("Error\n");
			return (2);
			}
		op(n);
		return (0);
}

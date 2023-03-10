#include <stdio.h>

/**
 * main - prints all args.
 * @argc: size of argv.
 * @argv: array of string of args.
 *
 * Return: 0 on success
 */

int main(int argc, char *argv[])
{
		int i;

		for (i = 0; i < argc; i++)
			{
			printf("%s\n", argv[i]);
			}
		return (0);
}

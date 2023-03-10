#include <stdio.h>

/**
 * main - prints the number of arg
 * @argc: size of argv
 * @argv: strings of array oassed by the cli
 *
 * Return: 0 on success
 */

int main(int argc, char *argv[])
{
		(void)argv;
		printf("%d\n", argc - 1);
		return (0);
}

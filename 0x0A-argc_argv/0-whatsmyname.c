#include <stdio.h>

/**
 * main - prints the name of the programme
 * @argc: size of argv
 * @argv: array of strings from tye cli
 *
 * Return: 0 on success
 */

int main(int argc, char *argv[])
{
		(void)argc;
		printf("%s\n", argv[0]);
		return (0);
}

#include <stdio.h>
#include <stdlib.h>

/**
 * main - print the minimum change
 * @argc: size of argv
 * @argv: array of args
 *
 * Return: 0 on success 1 on failure
 */

int main(int argc, char *argv[])
{
		int sum = 0;
		int num = argc == 2 ? atoi(argv[1]) : 0;

		if (argc != 2)
			{
			printf("Error\n");
			return (1);
			}
		while (1)
			{
			if (num >= 25)
				{
				num -= 25;
				sum++;
				}
			if (num >= 10 && num < 25)
				{
				num -= 10;
				sum++;
				}
			if (num >= 5 && num < 10)
				{
				num -= 5;
				sum++;
				}
			if (num >= 2 && num < 5)
				{
				num -= 2;
				sum++;
				}
			if (num >= 1 && num < 2)
				{
				num--;
				sum++;
				}
			if (num < 1)
				break;
			}
		printf("%d\n", sum);
		return (0);
}

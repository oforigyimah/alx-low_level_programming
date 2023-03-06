#include <stdio.h>

/**
 * print_diagsums - prints the sum of the diagonals of a square matrix of int
 * @a: pointer to start of matrix
 * @size: size of matrix
 *
 * Return: void
 */

void print_diagsums(int *a, int size)
{
		int i, j;
		int sum = 0, sum1 = 0;

		for (i = 0; i < size; i++)
			{
			for (j = 0; i < size; j++)
				{
				if (i == j)
					sum += a[i][j];
				}
			}
		for (i = 0; i < size; i++)
			{
			for (j = 0; j < size; j++)
				{
				if (j == size - i - 1)
					sum1 += a[i][j];
				}
			}
		printf("%d, &d/n", sum, sum1);
}

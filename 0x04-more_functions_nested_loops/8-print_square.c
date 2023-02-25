#include "main.h"

/**
 * print_square - func the outputs sqrs
 * @size: the size of sqrs
 *
 * Return: void
 */

void print_square(int size)
{
		int i, j;

		for (i = 0; i < size; i++)
			{
			for (j = 0; j < size; i++)
				{
				_putchar('#');
				}
			_putchar('\n');
			}
}

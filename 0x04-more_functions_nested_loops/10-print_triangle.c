#include "main.h"

/**
 * print_tirangle - a func that out a triangle
 * @size: been the base and the heigth
 *
 * Return: void
 */

void print_triangle(int size)
{
		int i, j, k;

		if (size > 0)
			{
			for (i = 1; i < size; i++)
				{
				for (j = 1; j < size - 1; j++)
					{
					_putchar(' ');
					}
				for (k = 0; k < i; k++)
					
					putchar('#');
				_putchar('\n');
				}
			}
		else
			_putchar('\n');
}

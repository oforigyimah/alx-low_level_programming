#include "main.h"

/**
 * print_diagonal - daw a diagonal line
 * @n: num of \
 *
 * Return: void
 */

void print_diagonal(int n)
{
		if (n > 0)
			{
			int i, j;

			for (i = 0; i < n; i++)
				{
				for (j = 0; j < n; j++)
					{
					if (i == j)
						_putchar('\\');
					else if (j < i)
						_putchar(' ');
					}
				_putchar('\n');
				}
			}
		else
			_putchar('\n');
}

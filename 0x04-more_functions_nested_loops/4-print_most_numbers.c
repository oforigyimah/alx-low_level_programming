#include "main.h"

/**
 * print_most_numbers - prints 01356789
 *
 * Return: void
 */

void print_most_numbers(void)
{
		int n;
		for (n = '0'; n < '10'; n++)
			{
				if (n == '2' || n == '4')
						continue;
				_putchar(n);
			}
		_putchar('\n');
}

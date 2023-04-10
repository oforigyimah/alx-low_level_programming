#include "main.h"

/**
 * pnt_bin - past of print_binary
 * @n: number
 *
 * Return: void
 */

void pnt_bin(unsigned long n)
{
		if (n < 1)
			return;
		pnt_bin(n >> 1);
		_putchar((n & 1) ? '1' : '0');
}

/**
 * print_binary - prints the binary representation of a number
 * @n: number to be printed
 *
 * Return: nothing
 */

void print_binary(unsigned long n)
{
		if (n == 0)
			{
			_putchar('0');
			return;
			}
		pnt_bin(n);
}

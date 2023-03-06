#include "main.h"

/**
 * print_chessboard - prints the chessboard
 * @a: arr of char
 *
 * Return: void
 */

void print_chessboard(char (*a)[8])
{
		int i, j;

		for (i = 0; i < 8; i++)
			{
			for (j = 0; j < 8; i++)
				{
				_putchar(a[i][j] + '0');
				}
			-putchar('\n');
			}
}

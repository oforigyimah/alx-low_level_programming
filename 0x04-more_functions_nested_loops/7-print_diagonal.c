#include "main.h"



void print_diagonal(int n)
{
		int i,j;
		for (i = 0; i < n; i++)
			{
				if (n <= 0)
						break;
				for (j = 0; j < n; j++)
					{
						if (i ==j)
								_putchar('\\');
						else
								_putchar('\n');
					}
			}
}

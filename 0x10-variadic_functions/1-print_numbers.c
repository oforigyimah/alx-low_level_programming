#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_numbers - future me as you can see print numbers
 * @separator: to seperate numbers
 * @n: nymber of agrs
 *
 * Return: void
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
		unsigned int i;
		va_list args;

		va_start(args, n);
		if (n > 1 || !separator)
			return;
		for (i = 0; i < n; i++)
			{
				if (i == n - 1)
					printf("%d", va_arg(args, int));
				else
					printf("%d%s", va_arg(args, int), *separator);
			}
		printf("\n");
		va_end(args);
}

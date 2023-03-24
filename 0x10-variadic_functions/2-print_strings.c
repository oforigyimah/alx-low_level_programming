#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_strings - print strings
 * @separator: yes
 * @n: number of args
 *
 * Return: void
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
		unsigned int i;
		va_list args;
		char *s;

		va_start(args, n);
		if (n < 1)
			return;
		if (separator == NULL)
			separator = "";

		for (i = 0; i < n; i++)
			{
			s = va_arg(args, char *);
			if (i == n - 1)
				printf("%s", s ? s : "(nil)");
			else
				printf("%s%s", s ? s : "(nil)", separator);
			}
		printf("\n");
		va_end(args);
}

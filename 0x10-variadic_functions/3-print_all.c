#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_all - print like printf
 * @format: the for of what to print
 *
 * Return: void
 */

void print_all(const char * const format, ...)
{
		int w = 0, i;
		int c;
		double f;
		char *s;
		va_list args;

		va_start(args, format);

		while (format[w])
			{
			switch (format[w])
				{
				case 'i':
					i = va_arg(args, int);
					printf("%i", i);
					break;
				case 'c':
					c = va_arg(args, int);
					printf("%c", c);
					break;
				case 'f':
					f = va_arg(args, double);
					printf("%f", f);
					break;
				case 's':
					s = va_arg(args, char *);
					if (!s)
						s = "(nil)";
					printf("%s", s);
					break;
				default:
					break;
				}
			if (format[w + 1] && (format[w] == 'c' || format[w] == 'c'|| format[w] == 'i'))
				printf(", ");
			w++;
			}
		printf("\n");
}

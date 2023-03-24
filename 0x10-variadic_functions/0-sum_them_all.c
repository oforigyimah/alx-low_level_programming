#include "variadic_functions.h"

/**
 * sum_them_all - sum of all the parameters 
 * @n: count of var
 *
 * Return: sum
 */

int sum_them_all(const unsigned int n, ...)
{
		int ag, sum = 0;
		unsigned int i;
		va_list arg;

		va_start(arg, n);
		if (n < 1)
			return (0);
		for (i = 0; i < n; i++)
			{
			ag = va_arg(arg, int);
			sum += ag;
			}
		va_end(arg);
		return (sum);
}

#include "main.h"

/**
 * checker - checks input num from n to the base
 * @n: number is to square
 * @base: base number rto check
 *
 * Return: sqrt of number base.
 */

int checker(int n, int base)
{
		if (n * n == base)
			return (n);
		if (n * n > base)
			return (-1);
		return (checker(n + 1, base));
}


/**
 * int _sqrt_recursion - natural square root of a njumber.
 * @n: number
 *
 * Return: sqrt of n.
 */

int _sqrt_recursion(int n)
{
		if (n < 0)
			return (-1);
		if (n == 0)
				return (0);
		return (checker(1, n));
}

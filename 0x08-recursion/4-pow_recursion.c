#include "main.h"

/**
 * _pow_recursion - cla the value of x raised to the power of y
 * @x: integer input
 * @y: integer input
 *
 * Return: x power y
 */

int _pow_recursion(int x, int y)
{
		if (y < 0)
			return (-1);
		if (y == 0)
			return (1);
		if (y == 1)
			return (x);
		return (x * _pow_recursion(x, y - 1));
}

#include "main.h"

/**
 * clear_bit - sets the value of a bit to 1 at a given index
 * @n: value to set bit
 * @index: position of bit to set
 *
 * Return: 1 on success or -1 on failuare
 */

int clear_bit(unsigned long *n, unsigned int index)
{
		if (index >= sizeof(unsigned long) * 8)
			return (-1);
		*n &= ~(1UL << index);
		return (1);
}

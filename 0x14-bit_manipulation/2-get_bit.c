#include "main.h"

/**
 * get_bit - return the value of a bit at a given index
 * @n: number to git bit
 * @index: the index, starting from of thr bit you want get
 *
 * Return: value of the bit at index 'index' or -1 on failuare
 */

int get_bit(unsigned long n, unsigned int index)
{
		int mask;

		if (index >= sizeof(unsigned long) * 8)
			return -1;
		mask = 1 << index;
		return (n & mask) ? 1 : 0;
}

#include "main.h"

/**
 * flip_bits - sets the value of a bit to 1 at a given index
 * @n: value to set bit
 * @index: position of bit to set
 *
 * Return: 1 on success or -1 on failuare
 */

unsigned int flip_bits(unsigned long n, unsigned long m)
{
		unsigned long int diff = n ^ m;
		unsigned int count = 0;

		while (diff != 0)
			{
				if ((diff & 1) == 1)
					count++;
				diff >>= 1;
			}
		return (count);		
}

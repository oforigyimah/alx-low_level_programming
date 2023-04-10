#include "main.h"
#include <stdlib.h>

/**
 * binary_to_uint - converts a binaber to an unsigner int
 * @b: pointer to to string of 0 and 1 chars
 *
 * Return: converted int on success else 0
 */

unsigned int binary_to_uint(const char *b)
{
		unsigned int ans = 0;

		if (!b)
			return (0);
		while (*b)
			{
				if (*b != '1' && *b != '0')
					return (0);
				ans = (ans << 1) + (*b - '0');
				b++;
			}
		return (ans);
}

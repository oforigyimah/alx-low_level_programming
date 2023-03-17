#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - allocate memory usinng malloc
 * @b: size of mem
 *
 * Return: point otherwise exit(93)
 */

void *malloc_checked(unsigned int b)
{
		void *m;

		m = malloc(b);
		if (!m)
			exit(93);
		return (m);
}

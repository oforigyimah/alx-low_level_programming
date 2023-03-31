#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked -  function that allocates memory using malloc
 * @b: int
 * Return: void pionter
 */

void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);
	if (p == NULL)
		exit(98);
	else
		return (p);
}

#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * _calloc - allocate memery and full it with bytes
 * @nmemb: number of members if the array
 * @size: size of each nmemb
 *
 * Return: pointer if allocation fails return null
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
		unsigned int i;
		void *c;

		if (!nmemb  || !size)
			return (NULL);
		c = malloc(nmemb * size);
		if (!c)
			return (NULL);
		for (i = 0; i < nmemb; i++)
			{
			((char *)c)[i] = 0;
			}
		return (c);
}

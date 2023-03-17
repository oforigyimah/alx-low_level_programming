#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * array_range - creates an array of interger
 * @min: min
 * @max: max
 *
 * Return: pointer to array
 */

int *array_range(int min, int max)
{
		int i;
		int *m;

		if (min > max)
			return (NULL);
		m = malloc(sizeof(int) * (max - min + 1));
		if (!m)
			return (NULL);
		for (i = 0; i < max - min + 1; i++)
			{
			m[i] = i + min;
			}
		return (m);
}

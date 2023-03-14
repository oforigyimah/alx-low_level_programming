#include "main.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * alloc_grid - point to a 2 dimensional array of integers.
 * @width: as you can see width
 * @height: as you can see hiegth
 *
 * Return: poniter to 2d array
 */

int **alloc_grid(int width, int height)
{
		int i = 0;
		int j = 0;
		int **m;

		if(width < 1 || height < 1)
			return (NULL);
		m = (int **)malloc(sizeof(int *));

		if (!m)
			return (NULL);
		for (i = 0; i < height; i++)
			{
			m[i] = (int *)malloc(sizeof(int *) * width);
			if (!m[i])
				{
				for (j = 0; j < i; j++)
					{
					free(m[j]);
					}
				free(m);
				return (NULL);
				}
			for (j = 0; j < width; j++)
				{
				m[i][j] = 0;
				}
			}
		return (m);
}

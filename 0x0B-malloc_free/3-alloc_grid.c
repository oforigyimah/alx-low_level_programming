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
		int arr[width][height];
		int i = 0, j = 0;
		int **m = (int **)malloc(sizeof(int *) *  height);

		if (!m)
			return (NULL);
		while (i < height)
			{
			m[i] = arr[i];
			while (j < width)
				{
				arr[i][j] = 0;
				j++;
				}
			j = 0;
			i++;
			}
		return (m);
}

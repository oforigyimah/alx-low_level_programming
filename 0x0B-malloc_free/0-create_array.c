#include "main.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * create_array - creates and array of chars' and initializes it.
 * @size: size of array
 * @c: the char to pass througth it
 *
 * Return: point to new creater arrays or NULL if it fails
 */

char *create_array(unsigned int size, char c)
{
		int i = size - 1;
		char *arr;

		arr = (char *)malloc(size * sizeof(char));

		if (arr == NULL || !size)
			return (NULL);
		while (i >= 0)
			{
			arr[i] = c;
			i--;
			}
		return (arr);
}

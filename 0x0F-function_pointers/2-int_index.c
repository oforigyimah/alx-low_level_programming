#include "function_pointers.h"

/**
 * int_index - seacrh of index
 * @array: array to search through
 * @size: size of array
 * @cmp: pointer to base function to compare
 *
 * Return: index of the first passed element
 */

int int_index(int *array, int size, int (*cmp)(int))
{
		int i = 0;

		if ((size < 1) || !array || !cmp)
			return (-1);
		while (i < size)
			{
			if (cmp(array[i]))
				return (i);
			i++;
			}
		return (-1);
}

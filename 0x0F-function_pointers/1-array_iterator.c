#include "function_pointers.h"

/**
 * array_iterator - callback passed function on each element
 * @array: array of pass
 * @size: size of the array
 * @action: function to should act on each elements
 *
 * Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
		size_t i = 0;

		while (i < size)
			{
			action(*(array + i));
			i++;
			}
}

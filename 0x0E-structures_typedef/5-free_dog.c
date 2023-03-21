#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - fu free.
 * @d: pointer to dog
 *
 * Return: voif
 */

void free_dog(dog_t *d)
{
		free(d);
}

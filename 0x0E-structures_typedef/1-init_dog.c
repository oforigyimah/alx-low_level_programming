#include "dog.h"

/**
 * init_dog - initialze variable of the type struct dog
 * @d: pointer to struct dog
 * @name: pointer to name property of the dog
 * @age: age of the dog
 * @owner: i guess name of the of the dog owner
 *
 * Return: void
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
		d->name = name;
		d->age = age;
		d->owner = owner;
}

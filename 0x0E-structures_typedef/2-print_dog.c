#include "dog.h"
#include <stdio.h>

/**
 * print_dog - prints a struct dog
 * @d: pointer to dog
 *
 * Return: void
 */

void print_dog(struct dog *d)
{
		if (!d)
			return;
		printf("Name: %s\n", d->name ? d->name : "(nil)");
		if (d->age)
			printf("Age: %.6f\n", d->age);
		else
			printf("Age: %s\n", "(nil)");
		printf("Owner: %s", d->owner ? d->owner : "(nil)");
}

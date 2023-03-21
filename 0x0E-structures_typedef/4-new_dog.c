#include <stddef.h>
#include <stdlib.h>
#include "dog.h"

/**
 * _strlen - a function that returns the length of a string 
 * @s: a string
 * Return: an integer
 */

int _strlen(char *s)
{
  int len = 0;

  while (*(s + len) != '\0')                           
    len++;
  return (len);
}

/**
 * _strcpy - function that copies the string pointed to by src
 * @src: copy from
 * @dest: copy to
 * Return: pointer
 */

char *_strcpy(char *dest, char *src)
{
  int i = 0;                                                 int j;

  while (src[i] != '\0')
    i++;

  for (j = 0; j <= i; j++)
  {
		*(dest + j) = src[j];
  }

  return (dest);
}

/**
 * new_dog - create a new dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 *
 * Return: pointer to new dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
		dog_t *d;

		d = malloc(sizeof(dog_t));
		if (!d || !name || !age || !owner)
			return (NULL);
		d->name = malloc(_strlen(name) + 1);
		d->owner = malloc(_strlen(owner) + 1);
		if (!d->name || !d->owner)
			return (NULL);
		_strcpy(d->name, name);
		_strcpy(d->owner, owner);
		d->age = age;
		return (d);
}

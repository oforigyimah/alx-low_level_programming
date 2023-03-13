#include <stddef.h>
#include <stdlib.h>
#include "main.h"

/**
 * _strdup - points newly allocated space in memory, whic contains a copy.
 * @str: pointer to string to copy
 *
 * Return: pointer to new str
 */

char *_strdup(char *str)
{
		int i = 0;
		char *m = (char *)malloc(sizeof(str) + 1);


		if (!m)
			return (NULL);
		while (*(str + i))
			{
			m[i] = str[i];
			i++;
			}
		return (m);
}

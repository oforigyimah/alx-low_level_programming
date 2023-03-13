#include <stddef.h>
#include <stdlib.h>
#include "main.h"

/**
 * str_concat - concatenates two strings.
 * @s1: fiest string
 * @s2: second string
 *
 * Return: pointer to resulting string.
 */

char *str_concat(char *s1, char *s2)
{
		int i = 0, j = 0;
		char *m = (char *)malloc(sizeof(s1) + sizeof(s2) + 1);

		if (!m)
			return (NULL);
		while (s1[i])
			{
			m[i] = s1[i];
			i++;
			}
		while (s2[j])
			{
			m[i + j] = s2[j];
			j++;
			}
		return (m);
}

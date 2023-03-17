#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * string_nconcat - concatenate two strings
 * @s1: first string
 * @s2: second string
 * @n: byte of s2 to copy
 *
 * Return: pointer of resulting string. if fails return null
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
		unsigned int i, len = 0, len2 = 0;
		char *m;

		if (s1 == NULL)
			s1 = "";
		if (s2 == NULL)
			s2 = "";
		while (s1[len])
			len++;
		while (s2[len2] && n > len2)
			len2++;
		m = malloc(len + len2 + 1);
		if (!m)
			return (NULL);
		for (i = 0; i < len; i++)
			m[i] = s1[i];
		for (i = 0; i < len2; i++)
			m[len + i] = s2[i];
		m[len + len2] = '\0';
		return (m);
}

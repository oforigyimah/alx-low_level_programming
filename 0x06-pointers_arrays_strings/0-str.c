#include "main.h"

/**
 * _strcat - this function concatenate two strings.
 * @dest: The first string.
 * @src: The second string
 *
 * Return: the concatenated string.
 */

char *_strcat(char *dest, char *src)
{
		int i = 0;
		int j = 0;

		while (dest[i] != '\0')
			{
				i++;
			}
		while (src[j] != '\0')
			{
				*(dest + i + j) = src[j];
				j++;
			}
		return (dest);
}

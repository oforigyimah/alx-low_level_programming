#include "main.h"

/**
 * _strncat - concatenates two strings
 * @dest: first string
 * @src: the second string
 * @n: bytes from src
 *
 * Return: pointer to the resulting string dest
 */

char *_strncat(char *dest, char *src, int n)
{
		int i = 0, j = 0;

		while (src[i] != '\0')
			{
			i++;
			}
		for (j = 0; j < n; j++)
			{
			*(dest + i + j) = src[j];
		return (dest);
}

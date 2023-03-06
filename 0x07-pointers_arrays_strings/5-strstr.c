#include "main.h"

/**
 * _strstr - locate a substring.
 * @haystack: sting ti  searche
 * @needle: senconf string
 *
 * Return: pointer to char
 */

char *_strstr(char *haystack, char *needle)
{
		int i = 0, j;

		while (*(haystack + i ))
			{
			j = 0;

			while (*(needle + j) && *(haystack + i + j) && *(needle + j) == *(haystack + i + j))
				{
				j++;
				}
			if (*(needle + j) == '\0')
				return (haystack + i);
			i++
			}
		return (0);
}

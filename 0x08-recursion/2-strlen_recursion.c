#include "main.h"

/**
 * _strlen_recursion - calculate a string lenth.
 * @s: pointer to string
 *
 * Return: lenth of string
 */

int _strlen_recursion(char *s)
{
		if (s[0] == '\0')
			return (0);
		return (1 + _strlen_recursion(s + 1));
}


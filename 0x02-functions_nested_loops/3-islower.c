#include "main.h"

/**
* _islower - a function that checks for lowercase character
*@c: character to check
* Return: 0 or 1.
*/

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

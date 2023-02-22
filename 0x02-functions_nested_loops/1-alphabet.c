#include "main.h"

/**
 * print_alphabet - print alphabet in lowercases followed by a new line
 */

void print_alphabet(void);
void print_alphabet()
{                
	        char c;
		for (c = "a"; c <= "z"; c++)
			{
				_putchar(c);
			}
		_putchar("\n");
}

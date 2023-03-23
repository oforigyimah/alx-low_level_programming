#include "function_pointers.h"

/**
 * print_name - function the print name
 * @name: name to pass
 * @f: function pointer to pass
 *
 * Return: void
 */

void print_name(char *name, void (*f)(char *))
{
		f(name);
}

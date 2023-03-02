#include <unistd.h>

/**
 * _putchar - writes the character to the stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and error id set appropriately
 */

int _putchar(chac c)
{
		return (write(1, &c, 1));
}

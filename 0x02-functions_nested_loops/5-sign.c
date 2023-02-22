#include "main.h"

int print_sign(int n);
int print_sign(int n)
{
		if (n > 0)
			{
				_putchar("+");
				return 1;
			}
		else if (n == 0)
			{
				_putchar(0);
				return 0;
			}
		else 
			{
				_putchar("-");
				return -1;
			}
}

int main(void)
{
    int r;

    r = print_sign(98);
    _putchar(',');
    _putchar(' ');
    _putchar(r + '0');
    _putchar('\n');
    r = print_sign(0);
    _putchar(',');
    _putchar(' ');
    _putchar(r + '0');
    _putchar('\n');
    r = print_sign(0xff);
    _putchar(',');
    _putchar(' ');
    _putchar(r + '0');
    _putchar('\n');
    r = print_sign(-1);
    _putchar(',');
    _putchar(' ');
    _putchar(r + '0');
    _putchar('\n');
    return (0);
}

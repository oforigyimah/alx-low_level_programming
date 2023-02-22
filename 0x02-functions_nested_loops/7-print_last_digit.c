#include "main.h"

int print_last_digit(int);
int print_last_digit(int n)
{
		l = n % 10;
		_putchar(l);
		return l;
}

int main(void)
{
    int r;

    print_last_digit(98);
    print_last_digit(0);
    r = print_last_digit(-1024);
    _putchar('0' + r);
    _putchar('\n');
    return (0);
}

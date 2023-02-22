#include "main.h"
void print_alphabet(void);
void print_alphabet()
{
		for (char c = "a"; c <= "z"; c++)
			{
				_putchar(c);
			}
		_putchar("\n");
}

int main(void)
{
		print_alphabet();
		return (0);
}

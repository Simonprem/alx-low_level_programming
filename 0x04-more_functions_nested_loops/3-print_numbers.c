#include "main.h"
/**
 * print_numbers - we will print numbers from 0 to 9.
 * descriptions: The exactly same thing as bellow.
 * return: 0 is success.
 */
void print_numbers(void)
{
int n;

	for (n = '0'; n <= '9'; n++)
	{
		_putchar(n);
	}
	_putchar('\n');
}

#include "main.h"
/**
 * print_most_numbers - As its name
 * description: we will print all numbers from 0 to 9 except 2 & 4.
 * Return: to 0 (void)
 */
void print_most_numbers(void)
{
	int n;

	for (n = '0'; n <= '9'; n++)
	{
		if (n != 2 && n != 4)
		{
			_putchar(n);
		}
	}
			_putchar('\n');
}


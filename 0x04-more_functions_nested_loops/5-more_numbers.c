#include "main.h"
/**
 * more_numbers - duplicate 0 to 9 14 times
 * description: We'll print numbers from 0 to 9.
 * Return: as usualy 0 is sucess so let's try it !
 */
void more_numbers(void)
{
	int e;
	int t;

	for (e = 0; e <= 9; e++)
	{
		for (t = 0; t <= 14; t++)
		{
			if (t > 9)
				_putchar('1');
				_putchar(t % 10 + '0');
		}
			_putchar('\n');
	}
}

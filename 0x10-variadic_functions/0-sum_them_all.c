#include "variadic_functions.h"
/**
 * sum_them_all - fucntion that gives the sum of its arguments.
 * @n: The number of parametres.
 * Return: 0 is success.
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	va_list args;
	va_start(args, n);
	int sum = 0;

	for (i = 0; i < n; i++)
	{
		int x = va_arg(args, int);
	       	sum = sum + x;
	}
	va_end(args);

	return sum;
}

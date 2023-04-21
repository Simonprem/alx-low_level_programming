#include "variadic_functions.h"

/**
 * print_numbers - prints numbers followed by a new line
 * @n: number of arguments
 * @separator: separator between int
 * Return: 0 os success
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned i;

	va_list args;
	va_start(args, n);

	for (i = 0; i < n; i++)
	{
	int x = va_arg(args, int);
	if (i < n - 1)
	printf("%d%s", x, separator);
	else
	printf("%d", x);
	}
	printf("\n");
	va_end (args);
}

#include "variadic_functions.h"
/**
 * print_strings - Prints strings with separator
 * @separator:  string used to separate strings
 * @n: number of strings arguments
 * Return: Always 0
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list args;

	va_start(args, n);
	if (separator == NULL)
		separator = "";

	for (i = 0; i < n; i++)
	{
		char* x = va_arg(args, char*);
		if (str == NULL)
			str = "(nil)";
		printf("%s", x);
		if (i < n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(args);
}

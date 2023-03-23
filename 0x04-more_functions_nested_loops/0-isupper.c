#include "main.h"
/**
 * _isupper - uppercase letters
 * Description: The same thing as below.
 * @c: character to check
 * Return: if uppercase 1 else 0.
 */
int _isupper(int c);
{
	int c;

	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}

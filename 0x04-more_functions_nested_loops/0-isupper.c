#include "main.h"
/**
 * int _isupper - Checking for uppercase character.
 * Description: The same thing as below.
 * Return: if uppercase 1 else 0.
 */
int _isupper(int c);
{
	int c;

	if (c >= 65 && c < 90)
		return (1);
	else 
		return (0);
}

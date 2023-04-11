#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of chars.
 * and initializes it with a specific char c.
 * @size: the size of the array
 * @c: initial value
 *
 * Return: a pointer to the array, or NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int e;

	if (size == 0)
		return (NULL);

	array = (char *)malloc(sizeof(char) * size);
	if (array == NULL)
		return (NULL);

	for (e = 0; e < size; e++)
		array[e] = c;

	return (array);
}
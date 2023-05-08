#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - Create a function that creates a file.
 * @filename: A name of the file.
 * @letters: The number of letters to print.
 * Return: NULL or Z
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t o, r, w;
	char *fer;

	if (filename == NULL)
		return (0);

	fer = malloc(sizeof(char) * letters);
	if (fer == NULL)
		return (0);

	o = open(filename, O_RDONLY);
	r = read(o, fer, letters);
	w = write(STDOUT_FILENO, fer, r);

	if (o == -1 || r == -1 || w == -1 || w != r)
	{
		free(fer);
		return (0);
	}

	free(fer);
	close(o);

	return (w);
}

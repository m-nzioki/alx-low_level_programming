#include "main.h"

/**
 * read_textfile -  reads a text file
 * and prints it to the POSIX standard output.
 * @filename: name of the file
 * @letters: number of letters to read
 * Return: number of letters read and printed if successful
 * else 0
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t o, r, w;
	char *str;

	str = malloc(sizeof(char) * letters);

	o = open(filename, O_RDONLY);
	if (o == -1)
		return (0);

	r = read(o, str, letters);
	if (r == -1)
		return (0);

	w = write(STDOUT_FILENO, str, r);
	if (w == -1)
		return (0);

	free(str);
	close(o);

	return (w);
}

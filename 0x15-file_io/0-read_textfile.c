#include "main.h"

/**
 * read_textfile - reads a text file and prints it
 * to the POSIX standard output
 * @filename: pointer to the file
 * @letters: number of letters it should read and print
 * Return: 0 if file can't open, filename is NULL or write fails
 * else number of letters
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t fd, r, w;
	char *buff;

	fd = open(filename, O_RDONLY);

	if (fd == -1)
		return (0);

	buff = malloc(sizeof(char) * letters);

	r = read(fd, buff, letters);
	w = write(STDOUT_FILENO, buff, r);

	if (w == -1)
		return (0);

	free(buff);
	close(fd);
	return (w);
}

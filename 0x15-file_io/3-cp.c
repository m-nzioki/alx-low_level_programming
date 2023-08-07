#include "main.h"

/**
 * print_error - prints error messages
 * @message: the message
 * @filename: name of file
 */
void print_error(const char *message, char *filename)
{
	dprintf(STDERR_FILENO, "Error: %s %s\n", message, filename);
}

/**
 * _close - closed files
 * @fd: file descriptors to be closed
 */
void _close(int fd)
{
	int x;

	x = close(fd);

	if (x == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

/**
 * print_usage - shows usage message
 */
void print_usage(void)
{
	dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
}

/**
 * buffer - allocates 1024 bytes for a buffer
 * @file: file buffer is storing memory for
 * Return: pointer to newly allocated buffer
 */

char *buffer(char *file)
{
	char *buff = malloc(sizeof(char) * 1024);

	if (buff == NULL)
	{
		print_error("Can't write to", file);
		exit(99);
	}

	return (buff);
}

/**
 * main - copies the contents of a file to another file.
 * @argc: number of arguments
 * @argv: array of pointers to arguments
 * Return: 0 when successful
 */
int main(int argc, char *argv[])
{
	int o_from, o_to, r, w;

	char *buff;

	if (argc != 3)
	{
		print_usage();
		exit(97);
	}
	o_from = open(argv[1], O_RDONLY);
	buff = buffer(argv[2]);
	r = read(o_from, buff, 1024);
	o_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (o_from == -1 || r == -1)
		{
			print_error("Can't read from file", argv[1]);
			free(buff);
			exit(98);
		}
		w = write(o_to, buff, r);
		if (o_to == -1 || w == -1)
		{
			print_error("Can't write to", argv[2]);
			free(buff);
			exit(99);
		}
		r = read(o_from, buff, 1024);
		o_to = open(argv[2], O_WRONLY | O_APPEND);

	} while (r > 0);
	free(buff);
	_close(o_from);
	_close(o_to);
	return (0);
}

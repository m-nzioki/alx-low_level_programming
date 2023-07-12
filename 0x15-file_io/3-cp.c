#include "main.h"
#include <stdio.h>

/**
 * alloc_buffer - allocates 1024 bytes for a buffer
 * @file: name of the file
 * Return: pointer to alloc_buffer
 */

char *alloc_buffer(char *file)
{
	char *buff;

	buff = malloc(1024);

	if (buff == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file);
		exit(99);
	}

	return (buff);
}

/**
 * _close - closes file descriptors
 * @fd: the file descriptor
 */

void _close(int fd)
{
	int i;

	i = close(fd);

	if (i == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

/**
 * main - copies content from one file to another
 * @argc: number of arguments passed
 * @argv: pointer to the args
 * Return: 0 if successful else
 * If the argument count is incorrect - exit code 97.
 * If file_from does not exist or cannot be read - exit code 98.
 * If file_to cannot be created or written to - exit code 99.
 * If file_to or file_from cannot be closed - exit code 100.
 */

int main(int argc, char *argv[])
{
	char *buff;
	int o_from, o_to, r, w;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	buff = alloc_buffer(argv[2]);
	o_from = open(argv[1], O_RDONLY);
	r = read(o_from, buff, 1024);

	do {
		if (o_from == -1 || r == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			free(buff);
			exit(98);
		}
		o_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
		w = write(o_to, buff, r);
		if (o_to == -1 || w == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
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

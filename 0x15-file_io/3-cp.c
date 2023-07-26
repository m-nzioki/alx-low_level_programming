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
	char *buff, *file_from, *file_to;
	int o_from, o_to;
	ssize_t bytes_r, bytes_w;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	file_from = argv[1];
	file_to = argv[2];

	o_from = open(file_from, O_RDONLY);

	if (o_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
		exit(98);
	}

	o_to = open(file_to, O_WRONLY | O_CREAT | O_TRUNC, 0664);

	if (o_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_to);
		exit(99);
	}

	buff = alloc_buffer(file_to);
	
	while ((bytes_r = read(o_from, buff, 1024)) > 0)
	{
		bytes_w = write(o_to,buff, bytes_r);

		if (bytes_w == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to);
			free(buff);
			exit(99);
		}
	}

	if (bytes_r == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
		free(buff);
		exit(98);
	}
	free(buff);
	_close(o_from);
	_close(o_to);

	return (0);
}

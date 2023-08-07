#include "main.h"

/**
 * create_file - creates a file.
 * @filename: name of file
 * @text_content: NULL terminated string to write to the file
 * Return: 1 on success else -1
 */

int create_file(const char *filename, char *text_content)
{
	int o, len = 0;
	ssize_t w;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for ( ; text_content[len];)
			len++;
	}

	o = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	if (o == -1)
		return (-1);

	w = write(o, text_content, len);
	if (w == -1)
		return (-1);

	close(o);

	return (1);
}

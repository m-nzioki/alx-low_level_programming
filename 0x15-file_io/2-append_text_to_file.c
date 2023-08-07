#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file.
 * @filename: name of the file
 * @text_content: NULL terminated string to add at the end of the file
 * Return: 1 when successful else -1
 */

int append_text_to_file(const char *filename, char *text_content)
{
	ssize_t o, w, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content == NULL)
		return (1);

	for ( ; text_content[len];)
		len++;

	o = open(filename, O_WRONLY | O_APPEND);
	if (o == -1)
		return (-1);

	w = write(o, text_content, len);
	if (w == -1)
		return (-1);

	close(o);

	return (1);
}

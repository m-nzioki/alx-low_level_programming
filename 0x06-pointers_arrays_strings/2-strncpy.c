#include "main.h"
#include <stddef.h>

/**
 * *_strncpy - copies a string
 * @dest: pointer to destination of the copy
 * @src: pointer to string being copied
 * @n: number of times to be copied
 *
 * Return: destination pointer value
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}

	for (; i < n; i++)
	{
		dest[i] = '\0';
	}

	return (dest);
}

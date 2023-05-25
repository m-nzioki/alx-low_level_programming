#include "main.h"

/**
 * _strcpy - copies a string pointed to by src to
 * buffer pointed to by dest
 * @dest: buffer pointer
 * @src: string pointer
 *
 * Return: pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int j;
	int i = 0;

	while (src[i] != '\0')
	{
		i++;
	}

	for (j = 0; j < i; j++)
		dest[j] = src[j];

	dest[j] = '\0';

	return (dest);
}

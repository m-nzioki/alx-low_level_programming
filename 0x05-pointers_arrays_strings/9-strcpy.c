#include "main.h"

/**
 * _strcpy - copies a string pointed to by src to
 * buffer pointed to by dest
 * @dest: buffer pointer
 * @src: string pointer
 *
 * Return: pointer to dest
 *
 */

char *_strcpy(char *dest, char *src)
{
	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}

	*dest = '\0';

	return (dest);
}

#include "main.h"

/**
 * *_strncat - concatentes 2 string by appending
 * src string to dest string using n bytes from src
 * @dest: string input
 * @src: string input
 * @n: no. of times to append from src
 *
 * Return: pointer to resulting string
 *
 */

char *_strncat(char *dest, char *src, int n)
{
	int i;
	int j;

	for (i = 0; dest[i] != '\0'; i++)
	{}
	for (j = 0; j < n && src[j] != '\0'; j++, i++)
	{
		dest[i] = src[j];
	}

	dest[i + j] = '\0';

	return (dest);
}

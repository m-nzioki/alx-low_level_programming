#include "main.h"

/**
 * *_strcat - concatenates 2 stings. Appending the src string to dest
 * @dest: string
 * @src: string
 * Return: pointer to resulting string
 *
 */

char *_strcat(char *dest, char *src)
{
	int i;
	int j;

	char *ptr = dest;

	for (i = 0; dest[i] != '\0'; i++)
	{}
	for (j = 0; src[j] != '\0'; j++, i++)
	{
		dest[i] = src[j];
	}
	dest[i + j] = '\0';

	return (ptr);
}

#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings s1 and n bytes of s2
 * @s1: 1st string
 * @s2: 2nd string
 * @n: number of bytes of s2
 * Return: pointer to new space
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	unsigned int i = 0, j = 0, len = 0;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	while (s1[i] != '\0')
		i++;

	while (s2[j] != '\0')
		j++;

	if (n >= j)
		len = i + j;
	else
		len = i + n;

	ptr = malloc(sizeof(char) * (len + 1));

	if (ptr == NULL)
		return (NULL);

	for (i = 0; s1[i] != '\0'; i++)
		ptr[i] = s1[i];

	for (j = 0; j < n ; j++)
	{
		ptr[i] = s2[j];
		i++;
	}

	ptr[i] = '\0';

	return (ptr);
}

#include "main.h"
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory
 * which contains a copy of the string given as a parameter.
 * @str: the string
 * Return: NULL - if it fails or if str = NULL; else pointer to new space
 */

char *_strdup(char *str)
{
	char *arr;
	int i = 0;

	if (str == NULL)
		return (NULL);

	while (str[i] != '\0')
		i++;

	arr = malloc((sizeof(char) * i) + 1);

	if (arr == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
		arr[i] = str[i];

	return (arr);
}

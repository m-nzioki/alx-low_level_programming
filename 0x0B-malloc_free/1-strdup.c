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
	int i;
	char *arr;
	int j = 0;

	while (str[j] != '\0')
		j++;

	arr = malloc(sizeof(char) * j);

	if (str == NULL || arr == NULL)
		return (NULL);

	for (i = 0; i < j; i++)
		arr[i] = str[i];

	return (arr);
}

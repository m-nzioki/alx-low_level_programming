#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of chars,
 * and initializes it with a specific char.
 * @size: size of the array
 * @c: the specific character
 * Return: NULL if size = 0 or if it fails else, pointer to array
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *arr_p;

	if (size == 0)
		return (NULL);
	arr_p = malloc(sizeof(char) * size);

	if (arr_p == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		arr_p[i] = c;

	return (arr_p);
}

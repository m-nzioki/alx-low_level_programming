#include "main.h"

/**
 * _strlen - length of a string
 *@s: string
 *
 * Return: length of string
 */

int _strlen(char *s)
{
	char *t;

	int i = 0;

	for (t = s; *t != '\0'; t++)
		i++;
	return (i);
}

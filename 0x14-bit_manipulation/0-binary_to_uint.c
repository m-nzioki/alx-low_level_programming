#include "main.h"
#include <stdio.h>

/**
 * _strlen - finds the length of a string
 * @str: the string
 * Return: length of string
 */

int _strlen(const char *str)
{
	int i = 0;

	while (str[i] != '\0')
		i++;

	return (i);
}

/**
 * binary_to_uint - converts binary number to unsigned int
 * @b: pointer to string of 0s and 1s
 * Return: 0 if any of the chars is not a 1 or 0 of b = NULL
 * else the converted number
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int deci = 1, num = 0;
	int i, len;

	if (b == NULL)
		return (0);

	len = _strlen(b);

	i = len - 1;

	while (i >= 0)
	{
		if (b[i] > '1' || b[i] < '0')
			return (0);
		else if (b[i] == '1')
			num += deci;
		deci = deci * 2;
		i--;
	}
	return (num);
}

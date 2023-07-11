#include "main.h"

/**
 * binary_to_uint - converts binary number to unsigned int
 * @b: pointer to string of 0s and 1s
 * Return: 0 if any of the chars is not a 1 or 0 of b = NULL
 * else the converted number
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int num = 0;
	int i;

	if (b == NULL)
		return (0);

	for (i = 0; b[i]; i++)
	{
		if (b[i] > '1' || b[i] < '0')
			return (0);
		num = 2 * num + (b[i] - '0');
	}
	return (num);
}

#include "main.h"

/**
 * binary_to_uint - converts binary number to unsigned int
 * @b: pointer to string of 0s and 1s
 * Return: 0 if any of the chars is not a 1 or 0 of b = NULL
 * else the converted number
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int deci = 0, num = 0;
	int i = 0, len = 0;

	if (b == NULL)
		return (0);

	while (b[i] != '\0')
		len++;

	for (i = (len - 1); i >= 0; i--)
	{
		if (b[i] != '1' || b[i] != '0')
			return (0);
		if (b[i] == '1')
			num = num + (1 << deci);
			deci++;
	}
	return (num);
}

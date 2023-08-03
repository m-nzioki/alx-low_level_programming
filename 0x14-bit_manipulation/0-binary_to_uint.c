#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: string of 0 an 1 characters
 * Return: the number or 0 if it fails
 */

unsigned int binary_to_uint(const char *b)
{
	int i = 0;
	unsigned int num = 0, bit = 1;

	if (b == NULL)
		return (0);

	while (b[i] != '\0')
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);

		num = num << 1;
		if (b[i] == '1')
			num = num | bit;
		i++;
	}
	return (num);
}

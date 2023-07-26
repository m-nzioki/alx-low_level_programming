#include "main.h"

/**
 * get_bit - gets the value of a bit at a given index
 * @n: the number
 * @index: the index
 * Return: value of the bit at index or -1 if unsuccessful
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int x, mask, bits = 0;

	x = n;

	while (x != 0)
	{
		x >>= 1;
		bits++;
	}

	if (index >= bits)
		return (-1);

	mask = 1UL << index;

	if ((n & mask)  != 0)
		return (1);
	else
		return (0);
}

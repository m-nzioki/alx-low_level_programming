#include "main.h"

/**
 * clear_bit -  sets the value of a bit to 0 at a given index
 * @n: the number
 * @index: the index
 * Return: 1 on success, else -1
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int x, mask, bits = 0;

	x = (unsigned long int) -1;

	while (x != 0)
	{
		x >>= 1;
		bits++;
	}

	if (index >= bits)
		return (-1);

	mask = 1UL << index;

	*n &= ~mask;

	return (1);
}

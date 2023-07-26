#include "main.h"

/**
 * flip_bits - returns the number of bits
 * you would need to flip to get from one number to another.
 * @n: number to be checked
 * @m: number to check against
 * Return: number of bits that need flipping
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int flip, count;

	flip = n ^ m;

	while (flip != 0)
	{
		flip = flip & (flip - 1);
		count++;
	}

	return (count);
}

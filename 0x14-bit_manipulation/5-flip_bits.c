#include "main.h"

/**
 * flip_bits - returns the number of bits you would need to flip
 * to get from one number to another
 * @n: the number to flip bits
 * @m: target number
 * Return: number of bits flipped
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int x, count = 0;

	x = n ^ m;

	while (x != 0)
	{
		count = count + (x & 1);
		x = x >> 1;
	}
	return (count);
}

#include "main.h"

/**
 * print_binary - prints the binary representation of a number
 * @n: the number
 */

void print_binary(unsigned long int n)
{
	unsigned long int x, mask;
	int i, bits = 0;

	x = n;

	if (n == 0)
	{
		_putchar('0');
		return;
	}

	while (x != 0)
	{
		x >>= 1;
		bits++;
	}

	for (i = bits - 1; i >= 0; i--)
	{
		mask = 1UL << i;
		if ((n & mask) != 0)
			_putchar('1');
		else
			_putchar('0');
	}
}

#include "main.h"

/**
 * print_number - prints an integer
 * this function uses the concept of recursion
 * @n: the integer
 */

void print_number(int n)
{
	unsigned int i;

	if (n < 0)
	{
		i = n * -1;
		_putchar('-');
	}
	else
		i = n;

	/*base case*/
	if (i / 10 > 0)
	{
		print_number(i / 10);
	}
	_putchar((i % 10) + 48);
}

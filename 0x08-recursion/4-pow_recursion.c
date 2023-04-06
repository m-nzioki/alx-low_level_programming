#include "main.h"

/**
 * _pow_recursion - calculates the power of int x to int y.
 * @x: base int value
 * @y: power int value
 *
 * Return: x raised to the power of y.
 * or -1 if y is less than 0
 *
 */

int _pow_recursion(int x, int y)
{
	int i = x;

	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}

	i = i * _pow_recursion(x, y - 1);

	return (i);
}

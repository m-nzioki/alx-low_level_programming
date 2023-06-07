#include "main.h"

/**
 * _pow_recursion - raises x to the power of y
 * @x: base number
 * @y: exponent value
 * if y < 0, return -1 else
 * Return: value of x raised to the power of y
 */

int _pow_recursion(int x, int y)
{
	int value;

	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);

	value = x *  _pow_recursion(x, y - 1);

	return (value);
}

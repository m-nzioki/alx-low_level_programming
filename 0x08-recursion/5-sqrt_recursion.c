#include "main.h"

int _sqrt(int value, int root);
int _sqrt_recursion(int n);

/**
 * _sqrt - helper function
 * @value: the number whose root is being calculated
 * @root: the number being tested
 * Return: the natural square root of num or -1 if it does not have
 */

int _sqrt(int value, int root)
{
	if ((root * root) == value)
		return (root);
	if (root == (value / 2))
		return (-1);

	return (_sqrt(value, root + 1));
}

/**
 * _sqrt_recursion - calculates the natural squareroot of a number
 * @n: the number
 * if n does not have a natural squareroot returns -1 else
 * Return: natural squareroot of n
 */

int _sqrt_recursion(int n)
{
	int root = 0;

	if (n == 0)
		return (0);
	if (n == 1)
		return (1);
	if (n < 0)
		return (-1);

	return (_sqrt(n, root));
}

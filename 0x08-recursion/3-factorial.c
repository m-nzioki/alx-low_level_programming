#include "main.h"

/**
 * factorial - calculates the factorial of a number
 * @n: the number
 * if n < 0, returns -1 else
 * Return: the factorial
 */

int factorial(int n)
{
	int i;

	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);

	i = n * factorial(n - 1);
	return (i);
}

#include "main.h"

/*
 * factorial - calculates the factorial of a given number
 * @n: number whose factorial is caluclated
 *
 * Return: factorial of n
 *
 */

int factorial(int n)
{
	int i;

	if (n == 0 || n == 1)
	{
		return (1);
	}
	else if (n < 0)
	{
		return (-1);
	}

	i = n * factorial(n - 1);

	return (i);
}

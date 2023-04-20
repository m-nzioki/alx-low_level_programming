#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - returns the sum of alll its parameters
 * @n: first argument
 * Return: the sumof all arguments passed
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	int j;
	int sum = 0;

	va_start(args, n);

	if (n == 0)
		return (0);

	for (i = 0; i < n; i++)
	{
		j = va_arg(args, int);
		sum = sum + j;
	}
	va_end(args);
	return (sum);
}

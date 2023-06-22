#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - adds all its parameters
 * @n: number of parameters passed
 * Return: if n == 0, 0 else sum of parameters
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	va_list num;
	unsigned int sum = 0;

	va_start(num, n);

	if (n == 0)
		return (0);

	for (i = 0; i < n; i++)
		sum += va_arg(num, unsigned int);

	va_end(num);

	return (sum);
}

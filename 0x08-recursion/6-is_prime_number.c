#include "main.h"

int check_prime(int value, int num);
int is_prime_number(int n);

/**
 * is_prime_number - checks for prime numbers
 * @n: the number to be checked
 * Return: 1 if n is a prime number else 0
 */

int is_prime_number(int n)
{
	int divisor = 2;

	if (n <= 1)
		return (0);

	return (check_prime(n, divisor));
}

/**
 * check_prime - helper function
 * @value: the number
 * @num: possible divisor
 * Return: 1 if value is a prime number, else 0
 */

int check_prime(int value, int num)
{
	if ((value % num) == 0)
		return (0);

	if (num > (value / 2))
		return (1);

	return (check_prime(value, num + 1));
}

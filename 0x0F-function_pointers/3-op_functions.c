#include "3-calc.h"

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
 * op_add - calculates the sum of 2 integers
 * @a: 1st int
 * @b: 2nd int
 * Return: sum f a and b
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - calculates the difference of 2 integers
 * @a: 1st int
 * @b: 2nd int
 * Return: difference btwn a and b
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - calculates the product of 2 integers
 * @a: 1st int
 * @b: 2nd int
 * Return: product of a and b
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divides 2 integers
 * @a: 1st int
 * @b: 2nd int
 * Return: result of division
 */

int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - calculates the remainder
 * of a division of 2 integers
 * @a: 1st int
 * @b: 2nd int
 * Return: the remainder
 */

int op_mod(int a, int b)
{
	return (a % b);
}


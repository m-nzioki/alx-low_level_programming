#include "main.h"

/**
 * swap_int - swaps the values of two integers
 * @a: 1st int
 * @b: 2nd int
 *
 */

void swap_int(int *a, int *b)
{
	/*declaring a temporary value holder */
	int x;

	/* assigning the value of a to x, b to a then x to b */

	x = *a;
	*a = *b;
	*b = x;
}


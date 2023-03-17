#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry Point
 * Code assigns random number to integer n
 * Checks the last digit of n.
 * Determines if it is > 5, < 6 or 0 and outputs a statement
 * communicating to that effect.
 * Return: 0 when successful
 */

int main(void)
{
	int n;
	int i;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	i = n % 10;
		if (i == 0)
			printf("Last digit of %d is %d and is 0\n", n, i);
		else if (i > 5)
			printf("Last digit of %d is %d and is greater than 5\n", n, i);
		else
			printf("Last digit of %d is %d and is less than 6 and not 0\n", n, i);
	return (0);
}

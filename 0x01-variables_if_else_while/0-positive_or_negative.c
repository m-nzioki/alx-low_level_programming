#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry Point
 * Code generates random number
 * Tests whether it is negative, positive or the number 0
 * Outputs the number ans the result of the test.
 * Return: 0 when successful
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n < 0)
		printf("%d is negative\n", n);
	else if (n > 0)
		printf("%d is positive\n", n);
	else
		printf("%d is zero\n", n);

	return (0);
}

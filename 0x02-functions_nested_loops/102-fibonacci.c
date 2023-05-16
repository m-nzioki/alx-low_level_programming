#include <stdio.h>

/**
 * main - prints the first 50 Fibonacci numbers, starting with 1 and 2
 * each number in the sequence is the sum of the two numbers before it
 * Return: 0 when successful
 */

int main(void)
{
	unsigned long int i, j, k;

	int count = 0;

	for (i = 0, j = 1; count < 50; count++)
	{
		k = i + j;
		printf("%ld", k);
		if (count < 49)
			printf(", ");

		i = j;
		j = k;
	}
	printf("\n");
	return (0);
}

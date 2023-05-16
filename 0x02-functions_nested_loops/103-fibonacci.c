#include <stdio.h>

/**
 * main - finds and prints the sum of the even-valued terms
 * that dont exceed 4000000 in the Fibonacci series
 * Return: 0 when successful
 */

int main(void)
{
	unsigned long int i, j;
	unsigned long int k, sum;

	i = 0;
	j = 1;
	sum = 0;
	k = 0;

	while (k <= 4000000)
	{
		k = i + j;

		if (k % 2 == 0)
		{
			sum += k;
		}

		i = j;
		j = k;
	}
	printf("%ld", sum);
	printf("\n");
	return (0);
}

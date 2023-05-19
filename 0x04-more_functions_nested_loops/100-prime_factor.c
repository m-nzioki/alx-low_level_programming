#include <stdio.h>
#include <math.h>

/**
 * main - finds and prints the largest prime factor of the number 612852475143
 * Return: 0 when successful
 */

int main(void)
{
	unsigned long int prime, num, l_prime;

	num = 612852475143;

	for (prime = 2; prime <= (num / 2); prime++)
	{
		while (num % prime == 0)
		{
			l_prime = prime;
			num = num / prime;
		}
	}
	/* This if statement checks if the final resultant of num is greater than 2.*/
	/* if it is, then it is a prime number and the largest prime factor of num*/
	if (num > 2)
		l_prime = num;

	printf("%ld\n", l_prime);

	return (0);
}

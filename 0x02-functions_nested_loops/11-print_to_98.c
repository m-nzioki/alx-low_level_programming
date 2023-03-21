#include "main.h"
#include <unistd.h>
#include <stdio.h>

/**
 * print_to_98 - prints natural numbers from n to 98
 * @n: number where the counting starts from
 *
 */

void print_to_98(int n)
{
	int x;

	x = n;

	if (x == 98)
	{
		printf("98 ");
	}

	for (x = n; x <= 98; x++)
	{
		printf("%i, ",x);
	}
	for (x = n; x >= 98; x--)
	{
		printf("%i, ",x);
	}
	
	printf("\n");

}

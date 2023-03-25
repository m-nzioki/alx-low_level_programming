#include "main.h"
#include <unistd.h>

/**
 * print_diagonal - draws a diagonal line using the '\' character
 * @n: determines how many times the character is printed
 *
 */

void print_diagonal(int n)
{
	int x;
	int z;

	int y = n;

	if (y > 0)
	{
		for (x = 0; x < y; x++)
		{
			for (z = 0; z < x; z++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}


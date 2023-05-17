#include "main.h"

/**
 * print_triangle - prints a triangle using the '#' character
 * @size: determines the size of the triangle
 *
 */

void print_triangle(int size)
{
	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int i, j, k;
		
		for (i = 1; i <= size; i++)
		{
			for (j = i; j < size; j++)
			{	
				_putchar(' ');
			}
			for (k = 1; k <= i; k++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
	


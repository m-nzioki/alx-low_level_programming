#include "main.h"
#include <stdio.h>
/**
 * _print_rev_recursion - prints a string in reverse
 * @s: string pointer
 *
 */

int count = 0;
int i; 

int length(char *t)
{
	int x = 0;

	if (t[x] == '\0')
	{
		return (x);
	}

	x++;
	t++;
	length(t - 1);
	printf("Length: %d, \n", x);
	return (x);
}

void _print_rev_recursion(char *s)
{
	i = length(s) - count;

	if (i <= 0)
	{
		_putchar('\n');
		return;
	}

	_putchar(s[i]);
	count++; 

	_print_rev_recursion(s);
}


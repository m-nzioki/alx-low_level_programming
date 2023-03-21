#include <unistd.h>
#include "main.h"

/**
 *  _abs - computes absolute value of an int
 * @i: integer
 * Return: the absolute number of the int
 *
 */

int _abs(int i)
{
	int x;

	x = i;

	if (x >= 0)
	{
		return (x);
	}
	else
		return (x * -1);
}

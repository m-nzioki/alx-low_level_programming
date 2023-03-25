#include "main.h"

/**
 * _isdigit - checks for a digit (0 through 9)
 * @c: value to be checked
 *
 * Return: 1 if @c is a digiy
 * else return 0
 */

int _isdigit(int c)
{
	int i = c;

	if (i >= '0' && i <= '9')
		return (1);
	else
		return (0);
}

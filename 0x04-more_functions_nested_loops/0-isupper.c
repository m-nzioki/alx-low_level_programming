#include "main.h"

/**
 * _isupper - checks for an uppercase character
 * @c: character to check
 * 65- ASCII value for 'A'
 * 90- ASCII value for 'Z'
 * Return: 1 if @c is uppercase
 * else return 0
 *
 */

int _isupper(int c)
{
	char alph;

	for (alph = 65; alph <= 90; alph++)
	{
		if (alph == c)
			return (1);
	}
	return (0);
}

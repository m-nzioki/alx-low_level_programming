#include "main.h"

/**
 * _islower - checks for a lowercase character
 * @c: character to check
 * 97- ASCII value for 'a'
 * 122- ASCII value for 'z'
 * Return: 1 if @c is lowercase
 * else return 0
 *
 */

int _islower(int c)
{
	char alph;

	for (alph = 97; alph <= 122; alph++)
	{
		if (alph == c)
			return (1);
	}
	return (0);
}

#include "main.h"

/**
 * _isalpha - checks for alphabetic characters
 * @c: character to check
 * 97- ASCII value for 'a'
 * 122- ASCII value for 'z'
 * 65- ASCII value for 'A'
 * 90- ASCII value for 'Z'
 * Return: 1 if @c is alphabetic character
 * else return 0
 *
 */

int _isalpha(int c)
{
	char lower, upper;

	for (lower = 97; lower <= 122; lower++)
	{
		if (lower == c)
			return (1);
	}

	for (upper = 65; upper <= 90; upper++)
	{
		if (upper == c)
			return (1);
	}
	return (0);
}

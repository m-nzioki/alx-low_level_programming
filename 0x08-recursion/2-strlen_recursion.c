#include "main.h"

/**
 * _strlen_recursion - calculates the length of a string
 * @s: string pointer
 * Return: length of string
 *
 */

int i = 0;

int _strlen_recursion(char *s)
{

	if (s[i] == '\0')
	{
		return (i);
	}

	i++;
	s++;
	_strlen_recursion(s - 1);
	
	return (i);
}

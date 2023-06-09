#include "main.h"

int length(char *s);
int palindrome(char *s, int len, int n);
int is_palindrome(char *s);

/**
 * is_palindrome - checks if a string is a palindrome
 * @s: the string
 * Return: 1 if s is a palindrome, else 0
 */

int is_palindrome(char *s)
{
}

/**
 * length - calculates the length of a string
 * @s: the string
 * Return: length of string
 */

int length(char *s)
{
	int i = 0;

	if (*s != '0')
		i += length(s + 1);
	return (i);
}




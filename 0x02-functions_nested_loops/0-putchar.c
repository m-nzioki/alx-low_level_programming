#include "main.h"
#include <unistd.h>

/**
 * main - Entry point
 *
 * prints _putchar using _ putchar
 *
 * Return:(0) when successful
 *
 */

int main(void)
{
	char a[8] = "_putchar";
	int i;

	for (i = 0; i < 8; i++)
	{
		_putchar(a[i]);
	}
	_putchar('\n');

	return (0);
}

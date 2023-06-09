#include <stdio.h>

int length(char *s);

int main(void)
{
	int x;

	x = length("Hey!");

	printf("%d\n", x);
	return (0);
}

int length(char *s)
{
	int i = 0;

	if (*(s + i) != '\0')
	{
		i++;
		i += length(s + i);
	}
	return (i);
}


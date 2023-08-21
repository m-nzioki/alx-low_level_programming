#include <unistd.h>
#include <string.h>

int rand(void)
{
	static int counter = -1;

	counter++;

	if (counter == 0)
		return (9);
	if (counter == 1)
	        return (8);
	if (counter == 2)
        	return (10);
	if (counter == 3)
	        return (24);
	if (counter == 4)
        	return (75);
	if (counter == 5)
        	return (9);
	return (counter * counter % 30000);
}


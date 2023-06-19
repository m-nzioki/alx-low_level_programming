#include "dog.h"
#include <stdlib.h>
#include <string.h>

/**
 * new_dog - creates a new dog of type dog_t
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 * Return: pointer to the new dog created
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *doggie;
	int nlen, olen;

	nlen = strlen(name);
	olen = strlen(owner);

	doggie = malloc(sizeof(dog_t));
	if (doggie == NULL)
		return (NULL);

	doggie->name = malloc(sizeof(char) * (nlen + 1));
	if (doggie->name == NULL)
	{
		free(doggie);
		return (NULL);
	}
	doggie->owner = malloc(sizeof(char) * (olen + 1));
	if (doggie->owner == NULL)
	{
		free(doggie->name);
		free(doggie);
		return (NULL);
	}
	strcpy(doggie->name, name);
	strcpy(doggie->owner, owner);
	doggie->age = age;

	return (doggie);
}


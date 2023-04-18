#include "dog.h"
#include <stdlib.h>

/**
 * length - calculates the length of a string input
 * @s: the string
 * Return: length of a string
 */

int length(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}

/**
 * *copy - copies a string
 *  @src: pointer to source string
 *  @dest: pointer to destination
 * Return: pointer to destination
 */

char *copy(char *dest, char *src)
{
	int i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}

	dest[i] = '\0';

	return (dest);
}

/**
 * *new_dog - creates a new dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of the dog
 * Return: packaged information about the new dog: its name, age and owner
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog_1;
	int l_name;
	int l_owner;

	if (name == NULL || owner == NULL || age < 0)
		return (NULL);

	dog_1 = malloc(sizeof(dog_t));
	if (dog_1 == NULL)
		return (NULL);

	l_name = length(name);
	l_owner = length(owner);

	dog_1->name = malloc(sizeof(char) * (l_name + 1));

	if (dog_1->name == NULL)
	{
		free(dog_1);
		return (NULL);
	}

	dog_1->owner = malloc(sizeof(char) * (l_owner + 1));

	if (dog_1->owner == NULL)
	{
		free(dog_1);
		free(dog_1->name);
		return (NULL);
	}
	copy(dog_1->name, name);
	copy(dog_1->owner, owner);
	dog_1->age = age;

	return (dog_1);
}

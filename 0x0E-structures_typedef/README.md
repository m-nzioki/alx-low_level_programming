0x0E. C - Structures, typedef

dog.h - Define a new type struct dog with the following elements:

name, type = char *
age, type = float
owner, type = char *

1-init_dog.c - function that initialize a variable of type struct dog

2-print_dog.c - function that prints a struct dog

dog.h - Define a new type dog_t as a new name for the type struct dog.

4-new_dog.c - function that creates a new dog.

Prototype: dog_t *new_dog(char *name, float age, char *owner);
You have to store a copy of name and owner
Return NULL if the function fails

5-free_dog.c - frees dogs.

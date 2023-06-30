#include "lists.h"

/**
 * add_node - adds a new node at the end of a list_t list.
 * @head: beginning of the list
 * @str: string to be duplicated
 * Return: address of the new element or NULL if it fails
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, *curr;
	unsigned int i = 0;

	while (str[i] != '\0')
		i++;

	new = malloc(sizeof(list_t));

	if (new == NULL)
		return (NULL);

	new->next = NULL;
	new->len = i;
	new->str = strdup(str);

	curr = *head;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}

	while (curr->next != NULL)
		curr = curr->next;

	curr->next = new;


	return (new);
}

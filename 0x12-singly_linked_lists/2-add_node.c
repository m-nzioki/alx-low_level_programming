#include "lists.h"

/**
 * add_node - adds a new node at the beginning of a linked list
 * @head: pointer to the beginning of the list
 * @str: string value to be added to the new node
 * Return: address of the new element or Null if it fails
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;

	unsigned int i = 0;

	while (str[i] != '\0')
		i++;

	new_node = malloc(sizeof(list_t));

	if (new_node == NULL)
		return (NULL);

	new_node->str = strdup(str);
	new_node->len = i;
	new_node->next = *head;
	*head = new_node;

	return (*head);
}

#include "lists.h"

/**
 * add_nodeint_end - adds a node to the end of a list
 * @head: pointer to the pointer of the beginning of the node
 * @n: element of the new node
 * Return: NULL if it fails, else address of the new element
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node, *curr;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	curr = *head;

	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}

	while (curr->next != NULL)
		curr = curr->next;

	curr->next = new_node;

	return (new_node);
}

#include "lists.h"

/**
 * add_nodeint - adds a new node at the beginning of a listint_t
 * @head: pointer to the pointer of the head of the list
 * @n: member of new node
 * Return: NULL if it fails else, address of the new node
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = *head;
	*head = new_node;

	return (*head);
}

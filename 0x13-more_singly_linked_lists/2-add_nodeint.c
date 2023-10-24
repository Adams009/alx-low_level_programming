#include "lists.h"
/**
 * add_nodeint - adds a new node at the beginning
 * @head: the head pointer
 * @n: the int
 * Return: size_t
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *node_new;

	if (head == NULL)
		return (0);

	node_new = malloc(sizeof(listint_t));
	if (node_new == NULL)
		return (NULL);

	if (*head == NULL)
		node_new->next = NULL;
	else
		node_new->next = *head;

	node_new->n = n;
	*head = node_new;

	return (0);
}

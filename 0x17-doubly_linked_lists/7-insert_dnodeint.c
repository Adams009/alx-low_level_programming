#include "lists.h"
/**
 * insert_dnodeint_at_index -  inserts a new node
 * @h: the head
 * @idx: the index
 * @n: the int value
 * Return: address
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node, *temp;
	unsigned int i = 0;

	if (h == NULL)
		return (NULL);

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->prev = NULL;
	new_node->next = NULL;

	if (*h == NULL && idx == 0)
	{
		*h = new_node;
		return (new_node);
	}
	temp = *h;
	while (temp != NULL && i < idx)
	{
		temp = temp->next;
		i++;
	}
	if (i < idx)
	{
		free(new_node);
		return (NULL);
	}
	if (temp->prev != NULL)
		temp->prev->next = new_node;

	new_node->prev = temp->prev;
	new_node->next = temp;
	temp->prev = new_node;

	if (idx == 0)
		*h = new_node;

	return (new_node);
}

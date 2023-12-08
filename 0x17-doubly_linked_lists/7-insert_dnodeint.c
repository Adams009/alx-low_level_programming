#include "lists.h"
/**
 * insert_dnodeint_at_index - Inserts a new node
 * @h: Pointer to a pointer to the head
 * @idx: Index where the new node should be added
 * @n: Integer value to be added to the new node
 * Return: address or NULL
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node, *temp;
	unsigned int i = 0;

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

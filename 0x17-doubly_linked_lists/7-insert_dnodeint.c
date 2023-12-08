#include "lists.h"
#include <stdlib.h>

/**
 * insert_dnodeint_at_index - Inserts a new node at a given position.
 * @h: Pointer to a pointer to the head.
 * @idx: Index where the new node should be added.
 * @n: Integer value to be added to the new node.
 * Return: Address of the new node or NULL if failed.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node, *current = *h;
	unsigned int i;

	if (idx == 0)
		return (add_dnodeint(h, n));
	for (i = 1; current != NULL && i < idx; i++)
		current = current->next;

	if (current != NULL)
	{
		new_node = malloc(sizeof(dlistint_t));
		if (new_node != NULL)
		{
			new_node->n = n;
			new_node->prev = current;
			new_node->next = current->next;

			if (current->next != NULL)
				current->next->prev = new_node;

			current->next = new_node;
				return (new_node);
		}
	}

	return (NULL);
}

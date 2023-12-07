#include "lists.h"
/**
 * delete_dnodeint_at_index - Deletes the node at index
 * @head: Pointer to a pointer to the head
 * @index: Index of the node
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current = NULL;
	unsigned int i = 0;

	if (head == NULL || *head == NULL)
		return (-1);

	current = *head;

	while (current != NULL && i < index)
	{
		current = current->next;
		i++;
	}

	if (current == NULL && index > 0)
		return (-1);

	if (current->prev != NULL)
		current->prev->next = current->next;
	else
		*head = current->next;

	if (current->next != NULL)
		current->next->prev = current->prev;

	free(current);

	return (1);
}

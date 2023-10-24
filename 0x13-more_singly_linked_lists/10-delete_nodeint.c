#include "lists.h"
/**
 * delete_nodeint_at_index - deletes the node at index
 * @head: the head
 * @index: the unsigned int
 * Return: Always 0
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int z;
	listint_t *temp, *next;

	if (head == NULL || *head == NULL)
		return (-1);
	if (index == 0)
	{
		next = (*head)->next;
		free(*head);
		*head = next;
		return (1);
	}
	temp = *head;
	for (z = 0; z < index - 1; z++)
	{
		if (temp->next == NULL)
			return (-1);
		temp = temp->next;
	}
	next = temp->next;
	temp->next = next->next;
	free(next);
	return (1);
}

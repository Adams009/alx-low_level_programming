#include "lists.h"
/**
 * get_nodeint_at_index -  returns the nth node
 * @head: the head
 * @index: the index
 * Return: Always 0
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int z;

	if (head == NULL)
		return (NULL);
	for (z = 0; z < index; z++)
	{
		head = head->next;

		if (head == NULL)
			return (NULL);
	}
	return (head);
}

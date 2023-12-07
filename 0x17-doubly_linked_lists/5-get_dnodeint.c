#include "lists.h"
/**
 * get_dnodeint_at_index - function returns nth node
 * @head: the head
 * @index: the index
 * Return: nth node otherwise Null
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;

	while (head != NULL && i < index)
	{
		head = head->next;
		i++;
	}

	if (head == NULL || i < index)
	{
		return (NULL);
	}

	return (head);
}

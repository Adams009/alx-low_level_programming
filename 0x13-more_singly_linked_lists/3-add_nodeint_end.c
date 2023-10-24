#include "lists.h"
/**
 * add_nodeint_end - adds a new node at the end
 * @head: the head
 * @n: the int
 * Return: Always 0
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_end, *tmp_end;

	(void)tmp_end;

	new_end = malloc(sizeof(listint_t));
	if (new_end == NULL)
		return (NULL);

	new_end->n = n;
	new_end->next = NULL;
	tmp_end = *head;

	if (*head == NULL)
	{
		*head = new_end;
	}
	else
	{
		while (tmp_end->next != NULL)
		{
			tmp_end = tmp_end->next;
		}
		tmp_end->next = new_end;
	}

		return (*head);
}


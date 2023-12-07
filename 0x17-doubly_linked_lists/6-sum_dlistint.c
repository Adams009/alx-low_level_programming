#include "lists.h"
/**
 * sum_dlistint  - returns the sum of all the data (n)
 * @head: the head
 * Return: sum otherwise 0
 */

int sum_dlistint(dlistint_t *head)
{
	int add = 0;

	while (head != NULL)
	{
		add += head->n;
		head = head->next;
	}

	return (add);
}

#include "lists.h"
/**
 * sum_listint - returns the sum of all the data (n)
 * @head: the head
 * Return: Always 0
 */
int sum_listint(listint_t *head)
{
	int sum_add = 0;

	while (head != NULL)
	{
		sum_add += head->n;
		head = head->next;
	}
	return (sum_add);
}

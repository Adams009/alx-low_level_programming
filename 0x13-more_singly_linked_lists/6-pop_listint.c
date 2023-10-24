#include "lists.h"
/**
 * pop_listint - deletes the head node
 * @head: the head
 * Return: Always 0
 */
int pop_listint(listint_t **head)
{
	listint_t *move;
	int m;

	if (head == NULL || *head == NULL)
		return (0);

	move = *head;
	*head = move->next;
	m = move->n;
	free(move);
	return (m);
}

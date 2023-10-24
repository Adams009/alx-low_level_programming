#include "lists.h"
/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: the head
 * @idx: the index unsigned int
 * @n: the int
 * Return: Always 0
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int z;
	listint_t *temp, *inv;

	if (head == NULL)
		return (NULL);
	if (idx != 0)
	{
		temp = *head;
		for (z = 0; z < idx - 1 && temp != NULL; z++)
		{
			temp = temp->next;
		}
		if (temp == NULL)
			return (NULL);
	}
	inv = malloc(sizeof(listint_t));
	if (inv == NULL)
		return (NULL);
	inv->n = n;
	if (idx == 0)
	{
		inv->next = *head;
		*head = inv;
		return (inv);
	}
	inv->next = temp->next;
	temp->next = inv;
	return (inv);
}

#include "lists.h"
/**
 * print_listint - prints all the elements of a listint_t
 * @h: the head argument
 * Return: size_t
 */
size_t print_listint(const listint_t *h)
{
	size_t move;

	if (h == NULL)
		return (0);
	for (move = 0; h != NULL; move++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
	return (move);
}

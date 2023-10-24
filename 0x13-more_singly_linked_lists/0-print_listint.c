#include "lists.h"
/**
 * print_listint - prints all the elements of a listint_t
 * @h: the head argument
 * Return: size_t
 */
size_t print_listint(const listint_t *h)
{
	size_t move = 0;

	while (h)
	{
		move++;
		printf("%d\n", h->n);
		h = h->next;
	}

	return (move);
}

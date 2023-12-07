#include "lists.h"
/**
 * print_dlistint - the function to print all elements
 * @h: the head
 * Return: 0 on success, otherwise -1
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		count++;
	}

	return (count);
}

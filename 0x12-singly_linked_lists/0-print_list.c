#include "lists.h"
/**
 * print_list -  prints all the elements of a list_t list
 *
 * @h: the head
 * Return: Always 0
 */
size_t print_list(const list_t *h)
{
	size_t adam;

	adam = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
		printf("[%d] %s\n", 0, "(nil)");

		else
			printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		adam++;
	}
	return (adam);
}

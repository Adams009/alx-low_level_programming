#include "lists.h"
/**
 * listint_len - returns the number of elements
 * @h: thehead
 * Return: size_t
 */
size_t listint_len(const listint_t *h)
{
	size_t move = 0;

	if (h == NULL)
		return (0);
	for (; h != NULL; move++)
	{
		h = h->next;
	}
	return (move);
}

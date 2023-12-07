#include "lists.h"
/**
 * dlistint_len - the function to calculate the length
 * @h: the head that points to the elements
 * Return: the number of elements in the struture
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		h = h->next;
		count++;
	}

	return (count);
}

#include "lists.h"
/**
* list_len -  returns the number of elements
*@h: the head
* Return: Always 0
*/
size_t list_len(const list_t *h)
{
	size_t adam = 0;

	while (h != NULL)
	{
		h = h->next;
		adam++;
	}
	return (adam);
}

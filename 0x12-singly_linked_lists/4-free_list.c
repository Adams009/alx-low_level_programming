#include "lists.h"
/**
 * free_list - function that frees a list_t list
 * @head: the head parameter
 * Return: Always 0
 */
void free_list(list_t *head)
{
	list_t *renewed;

	while ((renewed = head) != NULL)
	{
		head = head->next;
		free(renewed->str);
		free(renewed);
	}
}

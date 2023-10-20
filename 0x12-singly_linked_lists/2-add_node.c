#include "lists.h"
/**
 * add_node - adds a new node at the beginning
 * @head: the head pointer
 * @str: the string parameter
 * Return: Always 0
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *renewed;
	unsigned int z, move = 0;

	renewed = malloc(sizeof(list_t));

	if (renewed == NULL)
		return (NULL);

	renewed->str = strdup(str);

	for (z = 0; str[z] != '\0'; z++)
		move++;

	renewed->len = move;

	renewed->next = *head;
	*head = renewed;

	return (*head);
}



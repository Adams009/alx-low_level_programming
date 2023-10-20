#include "lists.h"
/**
 * add_node_end -  adds a new node at the end
 * @head: the head pointer
 * @str: th string
 * Return: Always 0
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *renewed, *holder;
	unsigned int z, move = 0;

	renewed = malloc(sizeof(list_t));

	if (renewed == NULL)
		return (NULL);

	renewed->str = strdup(str);

		for (z = 0; str[z] != '\0'; z++)
	{
			move++;
	}

	renewed->len = move;
	renewed->next = NULL;
	holder = *head;

	if (holder == NULL)
		*head = renewed;
	else
	{
		while (holder->next != NULL)
			holder = holder->next;
		holder->next = renewed;
	}
	return (*head);
}

#include "main.h"
#include <stdlib.h>

/**
 * create_array - the array function
 * @size: calculate int
 * @c: the character
 * Return: the array
 */
char *create_array(unsigned int size, char c)
{
	unsigned int zac;
	char *sac;

	if (size == 0)
		return (NULL);

	sac = malloc(size * sizeof(char));

	if (sac == NULL)
		return (NULL);

	for (zac = 0; zac < size; zac++)
	{
		zac[sac] = c;
	}
	return (sac);
}

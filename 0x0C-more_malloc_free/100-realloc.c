#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _realloc - reallocates a memory
 * @ptr: the pointer
 * @old_size: the int old
 * @new_size: the new size
 *Return: Always 0
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *point;
	unsigned int z;

	if (new_size == old_size)
		return (ptr);

	if (ptr == NULL)
	{
		point = malloc(new_size);

		if (point == NULL)
			return (NULL);

		return (point);
	}
	else
	{
		if (new_size == 0)
		{
			free(ptr);
			return (NULL);
		}
	}

	point = malloc(new_size);

	if (point == NULL)
		return (NULL);

	for (z = 0; z < old_size && z < new_size; z++)
	{
		point[z] = ((char *) ptr)[z];
	}

	free(ptr);
	return (point);
}

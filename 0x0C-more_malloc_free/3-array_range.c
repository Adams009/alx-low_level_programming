#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * array_range -  creates an array of integers
 * @min: the minimum
 * @max: the maximum
 * Return: Always 0
 */
int *array_range(int min, int max)
{
	int *c, d = 0;

	if (min > max)
		return (NULL);

	c = malloc((sizeof(int) * (max - min)) + sizeof(int));

	if (c == NULL)
		return (NULL);

	while (min <= max)
	{
		c[d] = min;
		d++;
		min++;
	}

	return (c);
}

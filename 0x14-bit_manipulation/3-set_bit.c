#include "main.h"
/**
 * set_bit - sets the value of a bit to 1 at a given index.
 * @n: the unsigned int pointer
 * @index: the unsigned int
 * Return: Always 0
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int z;

	if (index > 63)
		return (-1);

	z = 1 << index;
	*n = (*n | z);

	return (1);
}

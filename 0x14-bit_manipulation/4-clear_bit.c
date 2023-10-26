#include "main.h"
/**
 * clear_bit - sets the value of a bit to 0 at a given index.
 * @n: the unsigned long pointer
 * @index: unsigned int
 * Return: Always 0
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int z;

	if (index > 63)
		return (-1);

	z = 1 << index;

	if (*n & z)
		*n ^= z;

	return (1);
}

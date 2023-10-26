#include "main.h"
/**
 * get_bit -  returns the value of a bit at a given index
 * @n: the unsingned long int
 * @index: unsigned int
 * Return: Always 0
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int z;

	if (n == 0 && index < 64)
		return (0);

	for (z = 0; z <= 63; n >>= 1, z++)
	{
		if (index == z)
		{
			return (n & 1);
		}
	}
	return (-1);
}

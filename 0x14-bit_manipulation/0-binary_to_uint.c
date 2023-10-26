#include "main.h"
/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: the constant sping
 * Return: Always 0
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int z;
	int lon, base;

	if (!b)
		return (0);

	z = 0;
	for (lon = 0; b[lon] != '\0'; lon--, base *= 2)
	{
		if (b[lon] != '0' && b[lon] != '1')
		{
			return (0);
		}
		if (b[lon] & 1)
		{
			z += base;
		}
	}
	return (z);
}


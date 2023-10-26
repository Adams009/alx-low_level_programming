#include "main.h"
/**
 * flip_bits - returns the number of bits to flip
 * @n: the unsigned int
 * @m: long unsinged int
 * Return: Always 0
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int z;

	for (z = 0; n || m; n >>= 1, m >>= 1)
	{
		if ((n & 1) != (m & 1))
			z++;
	}
	return (z);
}

#include "main.h"
/**
 * get_endianness -  checks the endianness.
 * @void: no argument
 * Return: Always 0
 */
int get_endianness(void)
{
	unsigned int z;
	char *zz;

	z = 1;
	zz = (char *) &z;

	return ((int)*zz);
}

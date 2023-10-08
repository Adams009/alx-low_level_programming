#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * malloc_checked - function that allocates memory
 * @b: the int to size
 * Return: Always 0
 */
void *malloc_checked(unsigned int b)
{
	char *z;

	z = malloc(b);

	if (z == NULL)
		exit(98);
	else
		return (z);
}

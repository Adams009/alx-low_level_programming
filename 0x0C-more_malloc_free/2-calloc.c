#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _calloc - allocates memory for an array
 * @nmemb: the unsingned int
 * @size: the int for size
 * Return: Always 0
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *pt;

	if (nmemb == 0 || size == 0)
		return (NULL);

	pt = calloc(nmemb, size);

	if (pt == NULL)
		return (NULL);
	else
		return (pt);
}

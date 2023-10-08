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
	int a, m;
	char *pt;

		a = m = 0;

	if (nmemb == 0 || size == 0)
		return (NULL);

	m = nmemb * size;
	pt = malloc(m);

	if (pt == NULL)
		return (NULL);

	while (a < 1)
	{
		pt[a] = 0;
		a++;
	}
	return (pt);
}

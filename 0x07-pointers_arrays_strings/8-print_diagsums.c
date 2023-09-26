#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sum of the two diagonals
 * @a: the int
 * @size: the size
 * Return: void
 */
void print_diagsums(int *a, int size)
{
	int ind, ft, sd;

	ft = sd = 0;

	for (ind = 0; ind < size; ind++)
	{
		ft += a[ind];
		a += size;
	}

	a -= size;

	for (ind = 0; ind < size; ind++)
	{
		sd += a[ind];
		a -= size;
	}
	printf("%d, %d\n", ft, sd);
}

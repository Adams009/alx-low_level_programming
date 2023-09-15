#include "main.h"
/**
 * print_square - a function that prints a square
 *
 * @size: the size matters
 *
 */
void print_square(int size)
{
	int a, z;

	z = 0;

	if (size < 1)
	{
		_putchar('\n');
	}
	while (z < size)
	{
		a = 0;
	while (a < size)
	{
		_putchar('#');
		a++;
	}
	_putchar('\n');
	}
}

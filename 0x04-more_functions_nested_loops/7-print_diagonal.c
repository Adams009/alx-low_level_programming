#include "main.h"
/**
 * print_diagonal - a function that draws a diagonal line on the terminal
 *
 * @n: the n int
 */
void print_diagonal(int n)
{
	if (n <= 0)
	{
	_putchar('\n');
	}
	else
	{
		int a, z;
	for (a = 0; a < n; a++)
	{
	for (z = 0; z < n; z++)
	{
	if (z == a)
	_putchar('\\');
	else if (z < a)
	_putchar(' ');
	}
	_putchar('\n');
	}
	}
}

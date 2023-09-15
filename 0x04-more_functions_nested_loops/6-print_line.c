#include "main.h"
/**
 * print_line - a function that draws a straight line in the terminal.
 *
 * @n: the int
 */
void print_line(int n)
{
	if (n <= 0)
	{
	_putchar('\n');
	}
	else
	{
		int v;

	for (v = 1; v <= n; i++)
	{
		_putchar('_');
	}
		_putchar('\n');
	}
}

#include "main'h"
/**
 * print_most_numbers - a function that prints the numbers, from 0 to 9
 *
 * void
 */
void print_most_numbers(void)
{
	int v;

	for
		(v = 0; v <= 9; v++)
		{
			if
				(!(v == 2 || v == 4))
					_putchar(v);
		}
	_putchar('\n');
}

#include "main.h"

/**
 * print_alphabet - print alphabet
 *
 */
void print_alphabet(void)
{
	char pa;

	pa = 'a';

	while (pa <= 'z')
	{
	_putchar(pa);
	pa++;
	}
	_putchar('\n');
}

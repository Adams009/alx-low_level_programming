#include "main.h"
/**
 * print_rev -  prints a string, in reverse
 *
 *@s: the parameter
 */
void print_rev(char *s)
{
	int z;
	int a = 0;

	for (z = 0; s[z]; z++)
		a++;
	for (z = a - 1; z >= 0; z--)
		_putchar(s[z]);
	_putchar('\n');
}

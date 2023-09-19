#include "main.h"
/**
 * puts_half - prints half of a string
 *
 *@str: the parameter
 *
 *void
 */
void puts_half(char *str)
{
	int z;
	int o = 0;
	int p;

	for (z = 0; str[z] != '\0'; z++)
		o++;
	p = (o - 1) / 2;
	for (z = p + 1; str[z] != '\0'; z++)
		_putchar(str[z]);
	_putchar('\n');
}

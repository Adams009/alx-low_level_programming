#include "main.h"
/**
 * _puts - function that prints a string
 *
 *@str : the parameter
 *void
 */
void _puts(char *str)
{
	int p;

	for (p = 0; str[p] != '\0'; p++)
	_putchar(str[p]);
	_putchar('\n');
}

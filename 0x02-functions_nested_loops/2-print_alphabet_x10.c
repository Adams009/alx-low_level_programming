#include "main.h"
/**
 * print_alphabet_x10 - it prints the alphabet 10times
 *
 */
void print_alphabet_x10(void)
{
	int t;
	char l;

	for (t = 0; t < 10; t++)
	{
	for (l = 'a'; l <= 'z'; l++)
	{
		_putchar(l);
	}
		_putchar('\n');
	}
}

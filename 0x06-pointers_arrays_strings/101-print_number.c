#include "main.h"
/**
 *
 * print_number - prints an integer
 * @n: the int
 * void
 */
void print_number(int n)
{
	unsigned int za;

	za = n;

	if (n < 0)
	{
		_putchar('-');
		za = -n;
	}
	if (za / 10 != 0)
	{
		print_number(za / 10);
	}
	_putchar(n1 % 10) + '0');
}

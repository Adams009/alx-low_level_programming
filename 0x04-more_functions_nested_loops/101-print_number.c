#include "main.h"
#include <stdio.h>

/**
 * print_number -  function that prints an integer
 *
 * @n: the integer to print
 *
 * Return: void
 */
void print_number(int n)
{
	unsigned int zed = n;

	if (n < 0)
	{
	_putchar('-');
	zed = -zed;
	}

	if (zed / 10 > 0)
	print_number(zed / 10);

	_putchar(zed % 10 + '0');
}

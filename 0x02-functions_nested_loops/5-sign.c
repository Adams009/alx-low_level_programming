#include "main.h"
/**
 * print_sign - it wuill print sign
 *
 * @n: the number to use for return
 *
 * Return: it will be 0 or -1
 *
 */
int print_sign(int n)
{
	int jn = -1;

	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (jn);
	}
}

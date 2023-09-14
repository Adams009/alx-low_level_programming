#include "main.h"
/**
 * print_last_digit - function that prints the last digit of a number
 *
 * @s: number for return
 *
 * Return: the valur of last digit
 */
int print_last_digit(int s)
{
	int r;

	if
		(s < 0)
		{
			r = -1 * (s % 10);
		}
	else
	{
		r = s % 10;
	}
	_putchar((r % 10) + '0');
	return (r % 10);
}

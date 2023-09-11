#include <stdio.h>
/**
 * main - this the starting of the program
 *
 * Return: Always '0' (success)
 */
int main(void)
{
	int _1, _2, _3;

	for (_1 = 0; _1 <= 7; _1++)
	for (_2 = _1 + 1; _2 <= 8; _2++)
	for (_3 = _2 + 1; _3 <= 9; _3++)
	{
		putchar(_1 + '0');
		putchar(_2 + '0');
		putchar(_3 + '0');
	if (_1 != 7 || _2 != 8 || _3 != 9)
	{
		putchar(',');
		putchar(' ');
	}
	}
		putchar('\n');
	return (0);
}

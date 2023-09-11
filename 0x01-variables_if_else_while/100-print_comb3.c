#include <stdio.h>
/**
 * main - this the starting of the program
 *
 * Result: Always return 0 (success)
 */
int main(void)
{
	int _1, _2;
	for (_1 = 0; _1 <= 9; _1++)
	{
	for (_2 = 0; _2 <= 9; _2++)
	{
	if (!((_1 == _2) || (_2 > _1)))
	{	
		putchar(_1 + '0');
		putchar(_2 + '0');
	if (!(_1 == '9' && _2 == '8'))
	{
		putchar(',');
		putchar(' ');
	}
	}
	}
	}
		putchar('\n');
	return (0);
}

#include <stdio.h>
/**
 * main - this is a room where your program starts
 *
 * Return: Always return 0 (success)
 */
int main(void)
{
	int oh;

	for (oh = 0; oh <= 9; oh++)
	{
		putchar('0' + oh);
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}

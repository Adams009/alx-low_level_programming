#include <stdio.h>
/**
 * main - where yout program starts
 *
 * Return: Always '0' for (success)
 */
int main(void)
{
	int a, z;

	for (a = 0; a <= 98; a++)
	for (z = a + 1; z <= 99; z++)
	{
		putchar((a / 10) + '0');
		putchar((a % 10) + '0');
		putchar(' ');
		putchar((z / 10) + '0');
		putchar((z % 10) + '0');

	if (a == 98 && z == 99)
	{
		putchar('\n');
	}
	else
	{
	:set 	putchar(',');
		putchar(' ');
	}
	}
	return (0);
}

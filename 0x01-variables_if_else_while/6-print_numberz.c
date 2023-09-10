#include <stdio.h>
/**
 * main - your first room where program starts
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int first;

	for (first = 0; first <= 9; first++)
	{
	putchar('0' + first);
	}
	putchar('\n');
	return (0);
}

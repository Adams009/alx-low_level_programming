#include <stdio.h>
/**
 * main - your first room where program starts
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int first = 0;
	int second = 9;

	for (int number = first; number <= second; number++)
{
	putchar('0' + number);
}
	putchar('\n');
	return (0);
}

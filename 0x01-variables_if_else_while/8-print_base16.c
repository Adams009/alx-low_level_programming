#include <stdio.h>
/**
 * main - your first room where program starts
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	char af;
	int op;

	for (op = 0; op <= 9; op++)
	{
	putchar('0' + op);
	}

	for (af = 'a'; af <= 'f'; af++)
	{
	putchar(af);
	}
	putchar('\n');
	return (0);
}

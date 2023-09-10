#include <stdio.h>
/**
 * main - your first room where program starts
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	char first = 'a';
	char second = 'z';

	while (first <= second);
	if (first != 'q' && first != 'e')
	putchar(first);
	first++;
	putchar('\n');
	return (0);
}

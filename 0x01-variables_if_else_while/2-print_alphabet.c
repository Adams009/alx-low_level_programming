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

	for (char letter = first; letter <= second; letter++)
{
	putchar(letter);
}
	putchar('\n');
	return (0);
}

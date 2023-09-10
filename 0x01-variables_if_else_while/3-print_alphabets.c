#include <stdio.h>
/**
 * main - your first room where program starts
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	char first = 'a';
	char second = 'A';
	char third = 'z';
	char forth = 'Z';

	for (char letter = first; letter <= third; letter++)
{
	putchar(letter);
}
	for (char letter = second; letter <= forth; letter++)
{
	putchar(letter);
}
	putchar('\n');
	return (0);
}

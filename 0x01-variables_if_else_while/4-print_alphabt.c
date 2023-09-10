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
	if (letter != 'q' && letter != 'e')
{
	putchar(letter);
}
}
	putchar('\n');
	return (0);
}

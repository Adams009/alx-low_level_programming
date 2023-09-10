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
	char first = 'a';
	char second = 'f';

	for (int digit = first; digit <= second; digit++)
{
	putchar('0' + digit);
}
	for (char letter = first; letter <= second; letter++)
{
	putchar(letter);
}
	putchar('\n');
	return (0);
}

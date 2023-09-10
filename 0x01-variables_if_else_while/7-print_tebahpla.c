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
	while (second >= first);
	putchar(second);
	second++;
	putchar('\n');
	return (0);
}

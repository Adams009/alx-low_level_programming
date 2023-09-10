#include <stdio.h>
/**
 * main - your first room where program starts
 *
 * Return: Always 0 (success)
 */
int main(void)
{

	char second;

	for (second = 'z'; second >= 'a'; second--)
	{
	putchar(second);
	}
	putchar('\n');
	return (0);
}

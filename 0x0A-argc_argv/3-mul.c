#include <stdio.h>
#include <stdlib.h>

/**
 * main - where program starts
 * @argc: counter
 * @argv: vector
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int p1, a1;

	p1 = 0;
	a1 = 0;

	if (argc == 3)
	{
		p1 = atoi(argv[1]);
		a1 = atoi(argv[2]);
		printf("%d\n", p1 * a1);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}

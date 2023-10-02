#include <stdio.h>
#include <stdlib.h>

/**
 * main - strts of program
 * @argv: vector
 * @argc: counter
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int ab, cd;

	ab = cd = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	ab = atoi(argv[1]);

	while (ab > 0)
	{
		cd++;

		if ((ab - 25) >= 0)
		{
			ab -= 25;
			continue;
		}
		if ((ab - 10) >= 0)
		{
			ab -= 10;
			continue;
		}
		if ((ab - 5) >= 0)
		{
			ab -= 5;
			continue;
		}
		if ((ab - 2) >= 0)
		{
			ab -= 2;
			continue;
		}
		ab--;
	}
	printf("%d\n", cd);
	return (0);
}

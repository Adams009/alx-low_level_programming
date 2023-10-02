#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * main - where program starts
 * @argc: counter
 *@argv: vector
 *Return: 0
*/
int main(int argc, char *argv[])
{
	int gi;
	unsigned int ek;
	unsigned int s;
	char *ge;

	if (argc > 1)
	{
		for (gi = 1; gi < argc; gi++)
		{
			ge = argv[gi];

			for (ek = 0; ek < strlen(ge); ek++)
			{
				if (ge[ek] < 48 || ge[ek] > 57)
				{
					printf("Error\n");
					return (1);
				}
			}
			s += atoi(ge);
			ge++;
		}
		printf("%d\n", s);
	}
	else
	{
		printf("0\n");
	}
	return (0);
}

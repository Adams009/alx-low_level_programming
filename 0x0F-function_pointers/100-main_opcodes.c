#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints the opcodes
 * @argc: int of argument
 * @argv: An array arguments
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int b, i;
	int (*adres)(int, char **) = main;
	unsigned char opcode;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	b = atoi(argv[1]);

	if (b < 0)
	{
		printf("Error\n");
		exit(2);
	}

	for (i = 0; i < b; i++)
	{
		opcode = *(unsigned char *)adres;
		printf("%.2x", opcode);

		if (i == b - 1)
			continue;
		printf(" ");

		adres++;
	}

	printf("\n");

	return (0);
}

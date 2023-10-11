#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
  * main - program starts
  * @argc: argument int
  * @argv: argument char
  *
  * Return: 0
  */
int main(int argc, char *argv[])
{
	int (*operat)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	operat = get_op_func(argv[2]);

	if (!operat)
	{
		printf("Error\n");
		exit(99);
	}

	printf("%d\n", operat(atoi(argv[1]), atoi(argv[3])));
	return (0);
}

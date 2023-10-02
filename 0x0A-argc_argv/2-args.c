#include <stdio.h>
/**
 * main - whre program strats
 * @argc: counter
 * @argv: vector
 * Return: o
 */
int main(int argc, char *argv[])
{
	int z;

	for (z = 0; z < argc; z++)
		printf("%s\n", argv[z]);
	return (0);
}

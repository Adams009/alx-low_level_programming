#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - is like a room where your program starts
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if ((n % 10) > 5)
{
	printf("Last digit of %d is %d and is greater than 5\n", n, n % 10);
}
	else if ((n % 10) < 6 && (n % 10) != 0)
{
	printf("Last digit of %d is %d and is less than 6 and not zero\n", n, n % 10);
}
	else
	((n % 10) == 0)
{
	printf("Last digit 0f %d is %d ans is 0\n", n, n % 10);
}
	return (0);
}

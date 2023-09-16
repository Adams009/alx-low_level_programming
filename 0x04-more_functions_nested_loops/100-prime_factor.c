#include <stdio.h>
#include <math.h>

/**
 *main - finds and prints the largest prime factor of the number 612852475143
 *
 * Return: Always 0
 */
int main(void)
{
	long a, z;
	long dig = 612852475143;
	double sq = sqrt(dig);

	for (a = 1; a <= sq; a++)
	{
	if (dig % a == 0)
	{
	z = dig / a;
	}
	}
	printf("%ld\n", z);
	return (0);
}

#include <stdio.h>
/**
 *main - prints the numbers from 1 to 100
 *
 * Return: Always (0)
 */
int main(void)
{
	int ric;

	for (ric = 1; ric <= 100; ric++)
	{
	if ((ric % 3) == 0 && (ric % 5) == 0)
		printf("FizzBuzz");
	else if ((ric % 3) == 0)
		printf("Fizz");
	else if ((ric % 5) == 0)
		printf("Buzz");
	else
		printf("%d", ric);

	if (ric == 100)
		continue;
	printf(" ");
	}
}

#include "main.h"

/**
 * actual_prime - says if int is prime
 * @z: num to evaluate
 * @a: integer
 * Return: 1 if n is prime, else 0
 */
int actual_prime(int z, int a)
{
	if (z <= 1 || (z != a && z % a == 0))
	{
		return (0);
	}
	else if (z == a)
	{
		return (1);
	}
	return (actual_prime(z, a + 1));
}

/**
 * is_prime_number - calculate prime recursive
 * @n: num to eval
 * Return: 1 if prime, else 0
 */

int is_prime_number(int n)
{
		return (actual_prime(n, 2));
}

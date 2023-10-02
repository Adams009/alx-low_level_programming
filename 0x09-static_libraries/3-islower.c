#include "main.h"
/**
 * _islower - integer for lowercase
 *
 * Description: to know lowercase
 *
 *@c: it will have be ASCII number for c
 *
 * Return: (1) if c is lower otherwise (0)
 */
int _islower(int c)
{
	char l = c;
	int clower = 0;

	if (l > 'a' && l <= 'z')
	{
		clower = 1;
	}

		return (clower);
}

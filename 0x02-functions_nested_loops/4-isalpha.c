#include "main.h"
/**
 * _isalpha - to check for all alphabets
 *
 * @c: the character to check with
 *
 * Return: (1) if c is a letter, lowercase or uppercase otherwise (0)
 */
int _isalpha(int c)
{
	
	char u;
	char s;
	int l = 0;

	for (u = 'a'; u <= 'z'; u++)
	{
		for (s = 'A'; s <= 'Z'; s++)
		{
			if (u == c || s == c)

	{
		l = 1;
	}
		}
	}
	return (l);
}

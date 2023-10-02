#include "main.h"
/**
 * _strpbrk - searches a string
 * @s: the pointer
 * @accept: the pointer
 * Return: the bytes in s and accept or null
 */
char *_strpbrk(char *s, char *accept)
{
	int ind;

	while (*s)
	{
		for (ind = 0; accept[ind]; ind++)
		{
			if (*s == accept[ind])
				return (s);
		}
		s++;
	}
	return ('\0');
}

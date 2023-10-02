#include "main.h"
/**
 * _memset - fills memory
 * @s: the pointer char
 * @b: the char
 * @n: the unsigned int
 *
 * Return: *s is to return
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;
	return (s);

}

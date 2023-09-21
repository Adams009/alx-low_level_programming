#include "main.h"
/**
 * _strcmp - a function that compares
 *
 * @s1: the s1
 *
 * @s2: the s2
 *
 *Return: s1 - s2
*/
int _strcmp(char *s1, char *s2)
{
	while (*s1 == *s2)
	{
		if (*s1 == '\0')
		{
			return (0);
		}
			s1++;
			s2++;
	}
	return (*s1 - *s2);

}

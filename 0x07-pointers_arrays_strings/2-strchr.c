#include "main.h"
/**
 * _strchr - locate character
 * @s: the pointer
 * @c: the char
 *
 * Return: c in *s or null
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	return (0);
}

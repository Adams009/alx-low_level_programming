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
	int ind;

	for (ind = 0; s[ind] >= '\0'; ind++)
	{
		if (s[ind] == c)
			return (s + ind);
	}
	return ('\0');
}

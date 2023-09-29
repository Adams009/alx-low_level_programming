#include "main.h"
/**
 * _strlen_recursion - returns the length of string
 * @s: the string
 * Return: Alway 0
 */
int _strlen_recursion(char *s)
{
	int lng = 0;

	if (*s)
	{
		lng++;
		lng += _strlen_recursion(s + 1);
	}
	return (lng);
}

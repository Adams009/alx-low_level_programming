#include "main.h"
/**
 * _strlen_recursion - to get the string
 * @s: string
 * Return: length og int
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	else
		return (1 + _strlen_recursion(s + 1));
}
/**
 * compare_string - compare string
 * @s: the string
 * @left: if it small
 * @right: if it much
 * Return: int
 */
int compare_string(char *s, int left, int right)
{

	if (*(s + left) == *(s + right))
	{
		if (left == right || left == right + 1)
			return (1);
		return (0 + compare_string(s, left + 1, right - 1));
	}
	return (0);
}
/**
 * is_palindrome - if is palindrome
 * @s: the string
 * Return: i if palindrome else 0
 */
int is_palindrome(char *s)
{
	if (*s == '\0')
		return (1);
	return (compare_string(s, 0, _strlen_recursion(s) - 1));
}

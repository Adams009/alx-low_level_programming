#include "main.h"
/**
 * string_toupper -  changes all lowercase
 *
 * @str: the str
 * Return: str
 */
char *string_toupper(char *str)
{
	char *mad = str;

		while (*str != '\0')
		{
			if (*str >= 'a' && *str <= 'z')
			{
			*str = *str - ('a' - 'A');
			}
			str++;
		}
	return (mad);
}

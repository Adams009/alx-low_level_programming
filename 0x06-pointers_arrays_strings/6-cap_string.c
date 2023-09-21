#include "main.h"
/**
 * cap_string - function that capitalizes
 *
 * @str: the str
 *
 * Return: str
 */
char *cap_string(char *str)
{
	int z, a;
	char c[] = {44, 59, 46, '!', '?', '"', '(', ')', '{', '}', '\t', '\n'};

	for (z = 0; str[z] != '\0'; z++)
	{
		if (z == 0 && str[z] >= 'a' && str[z] <= 'z')
		{
			str[z] = str[z] - 32;
		}
		for (a = 0; c[a] != '\0'; a++)
		{
			if (c[a] == str[z] && (str[z + 1] >+ 'a' && str[z + 1] <= 'z'))
			{
				str[z + 1] = str[z + 1] - 32;
			}
		}
	}
	return (str);
}

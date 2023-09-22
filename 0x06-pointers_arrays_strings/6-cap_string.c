#include "main.h"
#include <stdbool.h>
/**
 * cap_string - function that capitalizes
 *
 *@str : the str
 *
 * Return: str
 */
char *cap_string(char *str)
{
	int desk = 0;

	while (str[desk])
	{
		while (!(str[desk] >= 'a' && str[desk] <= 'z'))
			desk++;
		if (str[desk - 1] == ' ' ||
			str[desk - 1] == '\t' ||
			str[desk - 1] == '\n' ||
			str[desk - 1] == ',' ||
			str[desk - 1] == ';' ||
			str[desk - 1] == '.' ||
			str[desk - 1] == '!' ||
			str[desk - 1] == '?' ||
			str[desk - 1] == '"' ||
			str[desk - 1] == '(' ||
			str[desk - 1] == ')' ||
			str[desk - 1] == '{' ||
			str[desk - 1] == '}' ||
			desk == 0)

			str[desk] -= 32;

		desk++;
	}
		return (str);
}

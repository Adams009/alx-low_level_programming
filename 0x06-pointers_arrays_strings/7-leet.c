#include "main.h"
/**
 * leet - unction that encodes
 *
 *@str: the str
 *
 *Return: str
 */
char *leet(char *str)
{
	int j, k;
	char z[] = "aAeEoOtTlL";
	char a[] = "4433007711";

	for (j = 0; str[j] != '\0'; j++)
	{
		for (k = 0; z[k] != '\0'; k++)
		{
			if (str[j] == z[k])
			{
				str[j] = a[k];
			}
		}
	}
	return (str);
}

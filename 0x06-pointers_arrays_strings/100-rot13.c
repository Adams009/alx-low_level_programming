#include "main.h"
#include <stdio.h>

/**
 * rot13 - function that encodes 
 *
 * @str: the str
 *
 * REturn: str
 */
char *rot13(char *str)
{
	int a, z;
	char hold[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char hold2[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (a = 0; str[a] != '\0'; a++)
	{
		for (z = 0; z < 52; z++)
		{
			if (str[a] == hold[z])
			{
				str[a] == hold2[z];
				break;
			}
		}
	}
	return (str);
}

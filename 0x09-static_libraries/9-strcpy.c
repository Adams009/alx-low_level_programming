#include "main.h"
/**
 **_strcpy -  copies the string pointed to
 *@dest: the first char
 *@src: the next char
 * Return: char
 */
char *_strcpy(char *dest, char *src)
{
	int z;

	for (z = 0; src[z] != '\0'; z++)
		dest[z] = src[z];
	dest[z] = '\0';
	return (dest);
}

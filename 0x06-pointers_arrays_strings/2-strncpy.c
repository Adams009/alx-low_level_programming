#include "main.h"
/**
 * _strncpy - unction that copies
 *
 * @dest: the first char
 *
 * @src: second char
 *
 * @n: the int
 *
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	char *ogb = dest;

	while (*src != '\0' && n > 0)
	{
		*dest = *src;
		dest++;
		src++;
		n--;
	}
	while (n > 0)
	{
		*dest = '\0';
		dest++;
		n--;
	}
	return (ogb);

}

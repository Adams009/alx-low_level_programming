#include "main.h"
/**
 * _strcat - function that concatenates
 *
 * @dest: the first char
 *
 * @src: the second char
 *
 *Return: dest
 */
char *_strcat(char *dest, char *src)
{
	char *orst = dest;

	while (*dest != '\0')
	{
		dest++;
	}
	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (orst);

}

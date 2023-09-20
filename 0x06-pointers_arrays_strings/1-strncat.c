#include "main.h"
/**
 *_strncat - function that concatenates
 *
 *@dest: the first char
 *
 *@src: the second char
 *
 *orgdst: the return
 *
 *@n:the int number
 *
 *Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	char *orgdst = dest;

	while (*dest != '\0')
	{
		dest++;
	}
	while (*src != '\0' && n > 0)
	{
		*dest = *src;
		dest++;
		src++;
		n--;
	}
	*dest = '\0';
	return (orgdst);

}

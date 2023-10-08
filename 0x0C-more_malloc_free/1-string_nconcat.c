#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *string_nconcat - function that concatenates two strings
 *@s1: the string 1
 *@s2: the string 2
 *@n: the intrger
 *Return: Always 0
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int a = 0, d = 0, m = 0, l = 0;
	char *strg;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[a])
		a++;

	while (s2[m])
		m++;

	if (n >= m)
		l = a + m;
	else
		l = a + n;

	strg = malloc(sizeof(char) * l + 1);
	if (strg == NULL)
		return (NULL);

	m = 0;
	while (d < l)
	{
		if (d <= a)
			strg[d] = s1[d];

		if (d >= a)
		{
			strg[d] = s2[m];
			m++;
		}
		d++;
	}
	strg[d] = '\0';
	return (strg);
}

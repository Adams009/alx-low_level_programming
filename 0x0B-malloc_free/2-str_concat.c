#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 *str_concat - string concat
 *@s1: the str1
 *@s2: the string2
 *Return: the two concat
 */
char *str_concat(char *s1, char *s2)
{
	int o, p, q, r;
	char *sac;

	p = o = q = r = 0;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	while (s1[o])
		o++;
	while (s2[p])
		p++;
	r = o + p;
	sac = malloc((sizeof(char) * 1) + 1);

	if (sac == NULL)
		return (NULL);
	p = 0;

	while (q < r)
	{
		if (q <= o)
			sac[q] = s1[q];
		if (q >= o)
		{
			sac[q] = s2[p];
			p++;
		}
		q++;
	}
	sac[q] = '\0';
	return (sac);
}

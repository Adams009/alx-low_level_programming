#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * argstostr - function that concatenates
 * @ac: int ac
 * @av: char av
 * Return: Always 0
 */
char *argstostr(int ac, char **av)
{
	int o, p, q, r;
	char *sac;

	o = p = q = r = 0;

	if (ac == 0 || av == NULL)
		return (NULL);
	while (p < ac)
	{
		while (av[p][q])
		{
			o++;
			q++;
		}
		q = 0;
		p++;
	}
	sac = malloc((sizeof(char) * o) + ac + 1);

	p = 0;
	
	while (av[p])
	{
		while (av[p][q])
		{
		sac[r] = av[p][q];
		r++;
		q++;
	}
	sac[r] = '\n';

	q = 0;
	r++;
	p++;
	}
	r++;
	sac[r] = '\0';
	return (sac);
}

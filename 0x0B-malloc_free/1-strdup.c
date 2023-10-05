#include "main.h"
#include <stdlib.h>

/**
 * _strdup - the function
 * @str: the string
 * Return: the dup
 */
char *_strdup(char *str)
{
	int zac;
	int sac;
	char *sack;

	zac = 0;
	sac = 1;

	if (str == NULL)
		return (NULL);
	while (str[sac])
	{
		sac++;
	}
	sack = malloc((sizeof(char) * 1) + 1);

	if (sack == NULL)
		return (NULL);
	while (zac < sac)
	{
		sack[zac] = str[zac];
		zac++;
	}
	sack[zac] = '\0';
	return (sack);
}

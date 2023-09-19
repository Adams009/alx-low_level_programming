#include "main.h"
/**
 * rev_string -  function that reverses a string
 *
 *@s: the parameter
 *void
 */
void rev_string(char *s)
{
	int z;
	int a = 0;
	char k;

	for (z = 0; s[z] != '\0'; z++)
		a++;
	for (z = 0; z < a / 2; z++)
	{
		k = s[z];
		s[z] = s[a - 1 -  z];
		s[a - 1 - z] = k;
	}
}

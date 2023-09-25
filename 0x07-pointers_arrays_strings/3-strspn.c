#include "main.h"
/**
 *  _strspn - gtes the length
 *  @s: the pointer
 *  @accept: the char accept
 *
 *  return: *s of accept
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int z = 0;
	int a;

	while (*s)
	{
		for (a = 0; accept[a]; a++)
		{
			if (*s == accept[a])
			{
				z++;
				break;
			}
			else if (accept[a + 1] == '\0')
				return (z);
		}
		s++;
	}
	return (z);

}

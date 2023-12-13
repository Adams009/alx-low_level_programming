#include "main.h"
/**
 * _strstr - locate substring
 * @haystack: the pointer char
 * @needle: chucking pointer
 * Return: the beginning or NULL
 */
char *_strstr(char *haystack, char *needle)
{
	int ind;

	if (*needle == 0)
		return (haystack);
	while (*haystack)
	{
		ind = 0;

		if (haystack[ind] == needle[ind])
		{
			do {
				if (needle[ind + 1] == '\0')
					return (haystack);

				ind++;
			} while (haystack[ind] == needle[ind]);
		}
		haystack++;
	}
	return ('\0');
}

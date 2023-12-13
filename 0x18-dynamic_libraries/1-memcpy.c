#include "main.h"
/**
 * _memcpy - copies memory area
 * @dest: pointer char
 * @src: pointer src char
 * @n: unsingned
 *
 * Return: *dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int z;

	for (z = 0; z < n; z++)
		dest[z] = src[z];

	return (dest);
}

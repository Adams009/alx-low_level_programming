#include <stdlib.h>
#include "dog.h"
/**
 * _strlen - length of string
 * @s: string
 * Return: o
 */
int _strlen(char *s)
{
	int z;

	z = 0;

	while (s[z] != '\0')
	{
		z++;
	}
	return (z);
}

/**
 * _strcpy - copy string
 * @dest: pointer
 * @src: string copy
 * Return: 0
 */
char *_strcpy(char *dest, char *src)
{
	int lgth = 0, z;

	while (src[lgth] != '\0')
	{
		lgth++;
	}
	for (z = 0; z < lgth; z++)
	{
		dest[z] = src[z];
	}
	dest[z] = '\0';
	return (dest);
}

/**
 * new_dog - creates a new dog.
 * @name: char
 * @age: float
 * @owner: char
 * Return: 0
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	int lgt1, lgt2;

	lgt1 = _strlen(name);
	lgt2 = _strlen(owner);

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);

	dog->name = malloc(sizeof(char) * (lgt1 + 1));
	if (dog->name == NULL)
	{
		free(dog);

		return (NULL);
	}
	dog->owner = malloc(sizeof(char) * (lgt2 + 1));
	if (dog->owner == NULL)
	{
		free(dog);
		free(dog->name);
		return (NULL);
	}
	_strcpy(dog->name, name);
	_strcpy(dog->owner, owner);
	dog->age = age;

	return (dog);
}

#include <stdio.h>
#include "function_pointers.h"
/**
 * int_index -  searches for an integer
 * @array:  pointing to array
 * @size: size of array
 * @cmp: the function
 * Return: 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int itr = 0;

	if (size > 0)
	{
		if (array != NULL && cmp != NULL)
		{
			for (; itr < size; itr++)
			{
				if (cmp(array[itr]))
					return (itr);
			}
		}
	}
	return (-1);
}

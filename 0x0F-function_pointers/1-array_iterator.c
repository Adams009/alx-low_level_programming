#include <stdio.h>
#include "function_pointers.h"
/**
 * array_iterator - iterator
 * @array: the array pointer
 * @size: the size of it
 * @action: function action
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int itr = 0;

	if (array != NULL && action != NULL && size > 0)
	{
		while (itr < size)
		{
			action(array[itr]);
			itr++;
		}
	}
}

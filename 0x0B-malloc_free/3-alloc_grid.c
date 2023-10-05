#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - allocation grid
 * @width: int width
 * @height: int height
 * Return: Always 0
 */
int **alloc_grid(int width, int height)
{
	int o, p, q, r;
	int **sac;

	if (width <= 0 || height <= 0)
		return (NULL);
	sac = malloc(sizeof(int *) * height);

	if (sac == NULL)
	{
		free(sac);
		return (NULL);
	}
	for (o = 0; o < height; o++)
	{
		sac[o] = malloc(sizeof(int) * width);

		if (sac[o] == NULL)
		{
			for (p = o; p >= 0; p--)
			{
				free(sac[p]);
			}
			free(sac);
			return (NULL);
		}
	}
	for (q = 0; q < height; q++)
	{
		for (r = 0; r < width; r++)
		{
			sac[q][r] = 0;
		}
	}
	return (sac);
}

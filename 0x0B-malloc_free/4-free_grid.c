#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid -  free two grid
 * @grid: the first grid
 * @height: int height
 * Return: Always 0
 */
void free_grid(int **grid, int height)
{
	int up;

	for (up = 0; up < height; up++)
	{
		free(grid[up]);
	}
	free(grid);
}

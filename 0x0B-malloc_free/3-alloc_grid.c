#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * alloc_grid-  returns a pointer to a 2 dimensional array of integers
 * @width: array 1
 * @height: array 2
 * Return: integer
 */
int **alloc_grid(int width, int height)
{
	int i, j;
	int **grid = (int **)malloc(height * sizeof(int *));

	if (width <= 0 || height <= 0)
	{
	return (NULL);
	}

	if (grid == NULL)
	{
	return (NULL);
	}

	for (i = 0; i < height; i++)
	{
	grid[i] = (int *)malloc(width, sizeof(int));
	if (grid[i] == NULL)
	{
	for (j = 0; j < i; j++)
	{
		free(grid[j]);
	}
	free(grid);
	return (NULL);
	}
	}

	return (grid);
}

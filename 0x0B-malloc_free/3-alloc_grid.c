#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to 2 dimenstional array
 *
 * @width: width of the array
 * @height: height of the array
 * Return: pointer to array if succesful or Null if negative
 */

int **alloc_grid(int width, int height)
{
	int **grid;
	int h, w;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	grid = malloc(sizeof(int *) * height);
	if (grid == NULL)
	{
		return (NULL);
	}
	for (h = 0; h < height; h++)
	{
		grid[h] = malloc(sizeof(int) * width);

		if (grid[h] == NULL)
		{
			for (; h >= 0; h--)
			free(grid[h]);
			free(grid);
			return (NULL);
		}
	}
	for (h = 0; h < height; h++)
		for (w = 0; w < width; w++)
			grid[h][w] = 0;
	return (grid);
}

#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - alloue de la memoire à un tableau 2D
 * @width: un entier correspondant au deplacement horizontal
 * @height: un entier correspondant au déplacement vertical
 *
 * Return: (grid) le tableau avec la quantité de memoire necessaire
 */

int **alloc_grid(int width, int height)
{
	int **grid;
	int i = 0;
	int j = 0;

	if (width <= 0 || height <= 0)
		return (NULL);

	grid = malloc(height * sizeof(int *));

	if (grid == 0)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		grid[i] = malloc(width * sizeof(int));

		if (grid[i] == 0)
		{
			free(grid);
			return (NULL);
		}
	}


	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			grid[i][j] = 0;
		}
	}
return (grid);
}

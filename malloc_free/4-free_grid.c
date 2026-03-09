#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid - libère toutes les allocations memoire de la grille
 * @grid: le tableau de pointeurs
 * @height: un entien correspondant au déplacement vertical
 *
 */
void free_grid(int **grid, int height)
{
	int h = 0;

	while (h < height)
	{
		free(grid[h]);
		h++;
	}
	free(grid);
}

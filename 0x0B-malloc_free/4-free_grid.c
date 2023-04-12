<<<<<<< HEAD
#include "main.h"
#include <stdlib.h>

/**
 * free_grid - ...
 * @grid: ...
 * @height: ...
 *
 * Return: ...
=======
#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * free_grid - frees 2dimension array
 * @grid: 2d grid
 * @height: height dimension
 * Return: 0
>>>>>>> 2a8658ea1c90a7cbbc7815fd8eddb2563d107049
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
<<<<<<< HEAD

=======
>>>>>>> 2a8658ea1c90a7cbbc7815fd8eddb2563d107049
	free(grid);
}

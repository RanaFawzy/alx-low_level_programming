#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * free_grid - frees 2d arrayy
 * @grid: 2d gridd
 * @height: height dimension of gridd
 * Description: frees memory of gridd
 * Return: nothingg
 *
 */
void free_grid(int **grid, int height)
{
int i;
for (i = 0; i < height; i++)
{
free(grid[i]);
}
free(grid);
}


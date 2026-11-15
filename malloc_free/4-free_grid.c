#include "main.h"
#include <stdlib.h>

/**
* alloc_grid - returns a pointer to a 2 dimensional array of integers
* @width: width of the grid
* @height: height of the grid
*
* Return: grid.
*/
void free_grid(int **grid, int height);
{
	int a;

	if (grid == NULL || height <= 0)
		return;

	for (a = 0; a < height; a++)
	{
		free(*(grid + a));
	}
	free(grid);
}


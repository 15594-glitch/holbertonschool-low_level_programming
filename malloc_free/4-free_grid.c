#include "main.h"
#include <stdlib.h>

/**
* free_grid - libère une grille 2D
* @grid: le tableau à libérer
* @height: le nombre de lignes
*
* Return: void
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

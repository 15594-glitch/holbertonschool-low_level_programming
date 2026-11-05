#include "main.h"

/**
 * swap_int  - échange les valeurs de *a et *b.
 * @a: Pointe le premier entier.
 * @b: Pointe le deuxième  entier.
 *
 * Cette fonction prend deux pointeurs sur des entiers et echange
 * les valeurs stockees a ces adresses.
 */
void swap_int(int *a, int *b)
{
	int **p = &a;
	int **pt = &b;

	**p = 42;
	**pt = 98;
}

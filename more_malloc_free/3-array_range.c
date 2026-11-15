#include "main.h"
#include <stdlib.h>

/**
 * array_range - crée un tableau d'entiers de min à max inclus
 * @min: la valeur minimale du tableau
 * @max: la valeur maximale du tableau
 *
 * Return: un pointeur vers le nouveau tableau, ou NULL en cas d'erreur
 */
int *array_range(int min, int max)
{
	int *array;
	int i;
	int size;

	if (min > max)
		return (NULL);

	size = max - min + 1;

	array = malloc(sizeof(int) * size);
	if (array == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		array[i] = min + i;

	return (array);
}

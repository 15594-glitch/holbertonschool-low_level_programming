#include "function_pointers.h"

/**
 * array_iterator - exécute une action sur chaque élément
 * @array: tableau d'entiers
 * @size: taille du tableau
 * @action: fonction à appliquer
 *
 * Return: Rien
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array == NULL || action == NULL)
		return;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}

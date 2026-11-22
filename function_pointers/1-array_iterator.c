#include "function_pointers.h"

/**
 * array_iterator - itère à travers un tableau et applique une fonction à chaque élément
 * @array: tableau à itérer
 * @size: taille du tableau
 * @action: pointeur vers la fonction d'action
 *
 * Return: Rien.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (array == NULL || action == NULL)
		return;

	for (size_t i = 0; i < size; i++)
		action(array[i]);
}

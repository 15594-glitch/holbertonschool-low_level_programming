#include <stdlib.h>
#include "main.h"

/**
* create_array - crée un tableau avec un caractère spécifique
* @size : la taille du tableau à créer
* @c : le caractère avec lequel initialiser le tableau
*
* Return: array
*/
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *array;

	if (size == 0)
		return (NULL);

	array = malloc(sizeof(char) * size);
	if (array == NULL)
		return (NULL);

	i = 0;
	while (i < size)
	{
		*(array + i) = c;
		i++;
	}
	return (array);
}


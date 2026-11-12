#include <stdlib.h>
#include "main.h"

/**
* create_array - crée un tableau de caractères avec un caractère spécifique
* @size : la taille du tableau à créer
* @c : le caractère avec lequel initialiser le tableau
*
* Retour : un pointeur vers le tableau, ou NULL en cas d'échec ou si size = 0
*/
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *array;

	if (size == 0)
		return (NULL);

	array = malloc(sizeof(char) * size)
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


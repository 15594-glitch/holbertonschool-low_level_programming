#include <stdlib.h>
#include "main.h"

/**
* _calloc - alloue de la mémoire pour un tableau
* @nmemb: nombre d'éléments
* @size: taille de chaque élément
*
* Return: pointeur vers la mémoire allouée, ou NULL
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(nmemb * size);
	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < (nmemb * size); i++)
	{
		ptr[i] = 0;
	}

	return (ptr);
}

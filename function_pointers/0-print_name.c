#include "function_pointers.h"
#include <stdlib.h>

/**
 * print_name - affiche un nom via un pointeur de fonction
 * @name: nom à afficher
 * @f: pointeur vers la fonction d'affichage
 *
 * Return: Rien.
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;

	f(name);
}

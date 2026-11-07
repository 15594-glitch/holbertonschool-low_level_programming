#include "main.h"

/**
* print_rev - Affiche une chaîne de caractères en sens inverse,.
* @s: parcours le tableau de droite à gauche et affiche les chars envers.
*
* Return: Rien.
*/
void print_rev(char *s)
{
	char *ss = s;

	while (*s != '\0')
	{
	s++;
	}
	while (s != ss)
	{
	s--;
	_putchar(*s);
	}
	_putchar('\n');
}

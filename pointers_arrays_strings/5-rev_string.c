#include "main.h"

/**
* rev_string - Affiche une chaîne de caractères en sens inverse.
* @s: La chaîne de caractères à parcourir et afficher à l'envers.
*
* Return: Rien.
*/
void rev_string(char *s)
{
	char *ss = s;
	char *c = (s + 4);

	while (*s != '\0')
	{
	s++;
	}

	while (s != ss)
	{
	s--;
		if (s == c)
		{
		*s = 32;
		}
	_putchar(*s);
	}
}

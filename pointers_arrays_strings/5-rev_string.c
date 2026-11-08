#include "main.h"

/**
* rev_string - Affiche une chaîne de caractères en sens inverse.
* @s: La chaîne de caractères à parcourir et afficher à l'envers.
*
* Return: Rien.
*/
void rev_string(char *s)
{
	char b2;
	char b1;
	char *ss;
	char *f;

	ss = s;
	f = s;

	while (*f != '\0')
	{
	f++;
	}

	f--;

	while (ss < f)
	{
	b1 = *ss;
	b2 = *f;
	*ss = b2;
	*f = b1;
	ss++;
	f--;
	}
}

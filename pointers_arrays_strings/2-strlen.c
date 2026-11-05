#include "main.h"

/**
* _strlen - est une fonction qui donne la chaîne de caractère (string).
* @s: parcours la chaiîne de caractère en les pointant successivement.
* @*s:pointeur suivis d'une variable qui pointe une donnée quelconque.
*
*Return: (nombre caractère);
*/
int _strlen(char *s)
{
	int len = 0;

	for (len = 0; *s != '\0'; s++)
	{
		len++;
	}

	return (len);
}

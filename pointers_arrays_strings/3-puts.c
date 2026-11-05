#include "main.h"

/**
* _puts - Affiche une chaîne de caractères suivie d'un saut de ligne.
* @str: La chaîne de caractères à afficher.
*
* Return: Rien.
*/
void _puts(char *str)
{
	while (*str != '\0')
	{
	_putchar(*str);
	str++;
	}
	_putchar('\n');
}


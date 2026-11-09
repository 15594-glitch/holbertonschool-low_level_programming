#include "main.h"

/**
* puts2 - Affiche un caractère sur deux.
* @str: La chaîne.
*
* Return: Rien.
*/
void puts2(char *str);
{
	int b = 0;

	while (str[b] != '\0')
	{
		_putchar(str[b]);
		(b += 2);
	}
	_putchar('\n');
}

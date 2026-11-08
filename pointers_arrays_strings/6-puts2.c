#include "main.h"

/**
* puts2 - Affiche un caractère sur deux.
* @str: La chaîne.
*
* Return: Rien.
*/
void puts2(char *str)
{
	for ((str + 1); *str != '\0'; (str += 2))
	{
	_putchar(*str);
	}
	_putchar('\n');
}

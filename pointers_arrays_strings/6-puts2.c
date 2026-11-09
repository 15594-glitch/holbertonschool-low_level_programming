#include "main.h"

/**
* puts2 - affiche un caractère sur deux.
* @str: Le tableau.
*
* Return: 0
*/
void puts2(char *str)
{
	int b = 0;

	while (str[b] != '\0')
	{
		_putchar(str[b]);
		b += 2;
	}
	_putchar('\n');
}

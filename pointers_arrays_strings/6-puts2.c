#include "main.h"

/**
* puts2 - affiche un caractère sur 2
* @str: the string to treat
*
* Return: 0
*/
void puts2(char *str)
{
	int b;

	b = 0;

	while (str[b] != '\0')
	{
		_putchar(str[b]);
		b += 2;
	}
	_putchar('\n');
}

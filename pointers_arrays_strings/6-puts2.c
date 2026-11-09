#include "main.h"

/**
* puts2 - affiche un caractère sur deux.
* @str: Le tableau de caractère
*
* Return: 0
*/
void puts2(char *str)
{
	int i = 0;

	if (str)
	{
	while (str[i] != '\0')
		{
		_putchar(str[i]);
		if (str[i + 1] == '\0')
			break;
		i += 2;
		}
	}
	_putchar('\n');
}

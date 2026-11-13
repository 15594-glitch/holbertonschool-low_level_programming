#include "main.h"
#include <stdlib.h>

/**
* *_strdup - returns a pointer to newly malloc, which contains str.
* @str : it's the source string
* Return: P
*/
char *_strdup(char *str)
{
	int n;
	char *p;
	char *m;
	int i;

	i = 0;

	if (str == NULL)
		return (NULL);

	m = str;

	while (*m != '\0')
	{
	m++;
	i++;
	}

	p = malloc(sizeof(*p) * i + 1);

	if (p == NULL)
		return (NULL);

	for (n = 0; n <= i ; n++)
	{
	*(p + n) = *(str + n);
	}
	return (p);
}


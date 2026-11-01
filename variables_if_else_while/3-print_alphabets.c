#include <stdio.h>
#include <stdlib.h>

/**
* main - entry points, this program prints alphabet in lowcase and uppercase
*
* Return: Always 0 (Success)
*/
int main(void)
{

	char lowercase = 'a';
	char uppercase = 'A';

	while (lowercase <= 'z')
	{
		putchar(lowercase);
		lowercase++;
	}
	while (uppercase <= 'Z')
	{
		putchar(uppercase);
		uppercase++;
	}
	putchar('\n');

	return (0);
}



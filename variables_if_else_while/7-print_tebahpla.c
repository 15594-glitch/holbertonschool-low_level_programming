#include <stdio.h>
#include <stdlib.h>

/**
* main - entry points, this program prints alphabet in lowcase and uppercase
*
* Return: Always 0 (Success)
*/
int main(void)
{
	char lowercase = 'z';

	while (lowercase >= 'a')
	{
	putchar(lowercase);
	lowercase--;
	}
	putchar('\n');

	return (0);
}

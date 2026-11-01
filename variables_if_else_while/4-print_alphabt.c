#include <stdio.h>
#include <stdlib.h>

/**
* main - entry points, this program prints alphabet in lowercase and uppercase
* whitout q and u
* Return: Always 0 (Success)
*/
int main(void)
{

	char lowercase = 'a';

	while (lowercase <= 'z')
	{
	if (lowercase != 'q' && lowercase != 'u')
		{
		putchar(lowercase);
		}
	lowercase++;
	}
	putchar('\n');

	return (0);
}

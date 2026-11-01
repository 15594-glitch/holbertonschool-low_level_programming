#include <stdio.h>
#include <stdlib.h>

/**
* main - entry points, this program prints alphabet in lowcase and uppercase
*
* Return: Always 0 (Success)
*/
int main(void)
{
	int digit = 48;
	int virgule = 44;
	int space = 32;

	while (digit <= 57)
	{
	putchar(digit);

	if (digit < 57)
		{
		putchar(virgule);
		putchar(space);
		}
	digit++;
	}
	putchar('\n');

	return (0);
}

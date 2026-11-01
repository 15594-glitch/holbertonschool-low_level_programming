#include <stdio.h>
#include <stdlib.h>

/**
* main - entry points, this program print digit numbers of base 10
* starting from 0 followed by a new line
* Return: Always 0 (Success)
*/
int main(void)
{
	int digit = 0;

	while (digit <= 9)
	{
	printf("%d", digit);
	digit++;
	}
	putchar('\n');

	return (0);
}

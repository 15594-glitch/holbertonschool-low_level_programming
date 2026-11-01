#include <stdio.h>
#include <stdlib.h>

/**
* main - entry points, this program prints alphabet in lowcase and uppercase
*
* Return: Always 0 (Success)
*/
int main(void)
{

	int numbers;
	int letters;

	for (numbers = 48; numbers <= 57; numbers++)
	{
	putchar(numbers);
	}
	for (letters = 97; letters <= 102; letters++)
	{
	putchar(letters);
	}
	putchar('\n');

	return (0);
}

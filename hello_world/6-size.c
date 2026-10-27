#include <stdio.h>

/**
 * main - Prints in the file character string
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	printf("size of char: %zu byte(s)\n", sizeof(char));
	printf("size of int: %zu byte(s)\n", sizeof(int));
	printf("size of long: %zu byte(s)\n", sizeof(long));
	printf("size of long long: %zu byte(s)\n", sizeof(long long));
	printf("size of float: %zu byte(s)\n", sizeof(float));

	return (0);
}

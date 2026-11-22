#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	int n;

	n = 402;
	printf("Valeur de n avant : %d\n", n);
	reset_to_98(&n);
	printf("Valeur de n apres : %d\n", n);

	return (0);
}

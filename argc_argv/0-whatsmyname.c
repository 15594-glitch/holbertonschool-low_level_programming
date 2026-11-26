#include <stdio.h>

/**
 * main - Prints the program name and path
 * @argc: Unused argument count
 * @argv: Argument vector
 *
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	/* Cast argc to void to avoid unused parameter warning */
	(void)argc;

	/* Print the program name and path */
	printf("%s\n", argv[0]);

	return (0);
}

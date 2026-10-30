#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry This program will assign a random number to the variable n
 * Print the last digit of the number stored in the variable n
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n % 10 > 5)
	{
	printf("the last digit of n is %d and is greater than 5\n", n);
	}
	else if (n % 10 == 0)
	{
	printf("the last digit of is %d\n", n);
	}
	else if (n % 10 < 6 && n % != 0)
	{
	printf("the last digit of n is %d and is less than 6 and 0 \n", n);
	}
	return (0);
}

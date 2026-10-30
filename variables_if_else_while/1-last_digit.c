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

	Last digit = n % 10;

	if (Last digit > 5)
	{
	printf("Last digit of %d is %d and is greater than 5\n", n, Last digit);
	}
	else if (Last digit  == 0)
	{
	printf("Last digit of %d is %d\n", n, Last digit);
	}
	else if (Last digit < 6 && Last digit != 0)
	{
	printf("Last digit of %d is %d and is less than 6 and 0 \n", n, Last digit);
	}
	return (0);
}

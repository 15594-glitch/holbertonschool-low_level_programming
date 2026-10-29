#include <stdlib.h>
#include <time.h>
/**
* main entry - point of the program, checks if number is positive or negative
*Return: Always 0 (success)
*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	for (n > 0; n == 0; n < 0;)
	{

	printf("%d\n", n);

	}

	return (0);
}

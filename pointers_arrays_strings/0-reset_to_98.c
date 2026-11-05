#include "main.h"
#include <stdio.h>

/*** reset_to_98 - updates the value a pointer points to to 98 
*
* Return: void.
*/
void reset_to_98(int *n)
{

	int n ;
	int *p;
	n = 402 ;
	p = &n;
	*p = 98;

}


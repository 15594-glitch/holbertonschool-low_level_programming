#include "main.h"
#include <stdlib.h>

/**
* malloc_checked - alloue de la mémoire
* @b: nombre d'octets
* Return: pointeur ou quitte (98)
*/
void *malloc_checked(unsigned int b)
{
    void *ptr;

    ptr = malloc(b);
    if (ptr == NULL)
        exit(98);

    return (ptr);
}

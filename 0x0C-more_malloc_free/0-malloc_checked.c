#include <stdlib.h>
#include "main.h"

/**
 * *malloc_checked - allocates memory using malloccc
 * @b: number of bytes to allocateee
 *
 * Return: a pointer to the allocated memoryyy
 */
void *malloc_checked(unsigned int b)
{
void *ptr;
ptr = malloc(b);
if (ptr == NULL)
exit(98);
return (ptr);
}

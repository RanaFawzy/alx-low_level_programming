#include "main.h"

/**
 *_memcpy - a function that copies memory areaaa
 *@dest: memory where is storeddd
 *@src: memory where is copieddd
 *@n: number of bytesss
 *
 *Return: copied memory with n bytes changeddd
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
int r = 0;
int i = n;
for (; r < i; r++)
{
dest[r] = src[r];
n--;
}
return (dest);
}

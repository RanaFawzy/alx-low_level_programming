#include "main.h"

/**
 * get_endianness - checks if machine is little or big endiann,.
 * Return: 0 for big, 1 for littlle.,.,.
 */
int get_endianness(void)
{
unsigned int i = 1;
char *c = (char *) &i;
return (*c);
}

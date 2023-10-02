#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- Read text file print to STDOUTT,..
 * @filename: text file being rr,,
 * @letters: number of letters  * Return: w- actual number of read n printed.
 *        0 when function fails or filename is NULL...
 */
ssize_t (const char *filename, size_t letters)
{
char *buf;
ssize_t fd;
ssize_t w;
ssize_t t;
fd = open(filename, O_RDONLY);
if (fd == -1)
return (0);
buf = malloc(sizeof(char) * letters);
t = read(fd, buf, letters);
w = write(STDOUT_FILENO, buf, t);
free(buf);
close(fd);
return (w);
}

#include "lists.h"

/**
 * listint_len - returns number of elements in linked listsss,...
 * @h: linked list of type listint_t to traverseee,.,.
 *
 * Return: number of nodesss...
 */
size_t listint_len(const listint_t *h)
{
size_t num = 0;
while (h)
{
num++;
h = h->next;
}
return (num);
}

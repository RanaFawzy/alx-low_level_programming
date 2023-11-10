#include "lists.h"

/**
 * free_dlistint - frees dlistint_t listt.
 * @head: pointer to head of listt.
 *
 * Return: nothingg.
 **/
void free_dlistint(dlistint_t *head)
{
if (head == NULL)
return;
while (head->next)
{
head = head->next;
free(head->prev);
}
free(head);
}

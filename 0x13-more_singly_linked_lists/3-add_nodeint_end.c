#include "lists.h"
#include <stdlib.h>
/**
  * add_nodeint_end - add node at end of a listint_t list.
  *
  * @head: head of double pointer
  * @n: int add the list
  * Return: NULL if it failed
  */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *next;
	listint_t *temp;

	if (head == NULL)
		return (NULL);
	next = malloc(sizeof(listint_t));
	if (next == NULL)
		return (NULL);
	next->n = n;
	next->new = NULL;
	if (*head == NULL)
	{
	*head = next;
		return (next);
	}
	temp = *head;
	while (temp->new != NULL)
	{
		temp = temp->new;
	}
	temp->new = next;
	return (next);
}

#include "lists.h"

/**
 * find_listint_loop - finds the loop in a linked list.
 *
 * function that finds the loop in a linked list.
 * @head: pointer to the beginning of the list
 * declare a maximum of two variables in your function.
 * Return: address of the node where the loop starts or NULL if there's no loop
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *Koala, *rabbit;

	Koala = rabbit = head;
	while (Koala && rabbit && rabbit->next)
	{
		Koala = Koala->next;
		rabbit = rabbit->next->next;
		if (Koala == rabbit)
		{
			Koala = head;
			break;
		}
	}
	if (!Koala || !rabbit || !rabbit->next)
		return (NULL);
	while (Koala != rabbit)
	{
		Koala = Koala->next;
		rabbit = rabbit->next;
	}
	return (rabbit);
}

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * list_len - check the code for Holberton School students.
 * @h: name of the list
 * Return: the number of nodes.
 * returns the number of elements in a linked list_t list.
 */
size_t list_len(const list_t *h)
{
	int x = 0;

	while (h)
	{
		x++;
		h = h->next;
	}
	return (x);
}

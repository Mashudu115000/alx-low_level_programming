#include <stdio.h>
#include <stddef.h>
#include "lists.h"

/**
 * list_len - returns number of elements in a linked list
 * @h: string element in the list to be evaluated
 *
 * Return: count
 */

size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}

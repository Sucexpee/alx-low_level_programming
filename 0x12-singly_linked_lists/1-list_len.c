#include <stdlib.h>
#include "lists.h"

/**
  * list_len - return all the numbers of the element in a linked list
 * @h: pointer to the list_t list
 *
 * Return: The number sof elements in h
 */
size_t list_len(const list_t *h)
{
	size_t n = 0;

	while (h)
	{
		n++;
		h = h->next;
	}
	return (n);
}

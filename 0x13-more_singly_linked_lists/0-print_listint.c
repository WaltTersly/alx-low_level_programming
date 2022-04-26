#include <stdio.h>
#include "lists.h"

/**
 *  * print_listint - Prints all elements of a listint_t list.
 *   *
 *    * @h: pointer to head.
 *     * Return: Number of nodes.
 *      */
size_t print_listint(const listint_t *h)
{
	size_t num = 0;

	while (h)
	{
		printf("%d\n", h->n);
		num++;
		h = h->next;
	}
	return (num);
}

#include <stdio.h>
#include "lists.h"

/**
 * check_cycle - check if a linked list has cycles
 *
 * @list: head of linked list
 *
 * Return: 0 if there are no cycles; otherwise 1
 */

int check_cycle(listint_t *list)
{
	listint_t *temp, *iter, *prev;

	if (list == NULL)
		return (0);

	temp = iter = list;

	while (iter->next != NULL)
	{
		prev = iter;
		iter = iter->next;

		if ((prev == iter) || (prev == iter->next))
			return (1);
		if (iter == temp)
			return (1);
	}

	return (0);
}

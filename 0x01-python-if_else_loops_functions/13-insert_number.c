#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * insert_node - insert a number into a sorted linked list
 *               number must be greater than the number in the node before it
 *               and less than or equal to the number int the node after it
 *
 * @head: head of the linked list
 * @number: number to be inserted
 *
 * Return: pointer to the new node in the linked list
 */

listint_t *insert_node(listint_t **head, int number)
{
	listint_t *new_node, *prev, *temp = *head;

	if (head == NULL)
		return (NULL);
	while (temp != NULL)
	{
		prev = temp;
		temp = temp->next;

		new_node = malloc(sizeof(listint_t));
		if (new_node == NULL)
			return (NULL);

		if (number < prev->n)
		{
			new_node->n = number;
			new_node->next = prev;
			*head = new_node;
			break;
		}
		if ((number > prev->n) && (temp == NULL))
		{
			prev->next = new_node;
			new_node->n = number;
			new_node->next = NULL;
			break;
		}
		if ((number >= prev->n) && (number <= temp->n))
		{
			new_node->n = number;
			new_node->next = temp;
			prev->next = new_node;
			break;
		}
		free(new_node);
	}
	return (new_node);
}

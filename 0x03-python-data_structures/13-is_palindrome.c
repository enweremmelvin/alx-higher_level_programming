#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

int is_palindrome(listint_t **head)
{
	listint_t *temp;
	int i, list_len, *val_list, *rev_list, check;

	if (*head == NULL)
		return (1);

	check = 0;
	list_len = 0;
	temp = *head;

	while (temp != NULL)
	{
		list_len += 1;
		temp = temp->next;
	}

	val_list = malloc(sizeof(int) * list_len);
	rev_list = malloc(sizeof(int) * list_len);
	temp = *head;

	for (i = 0; temp != NULL; i++)
	{
		val_list[i] = temp->n;
		temp = temp->next;
	}

	for (i = 0; val_list[list_len]; i++)
	{
		rev_list[i] = val_list[list_len];
		list_len--;
	}

	for (i = 0; val_list[i]; i++)
	{
	}

	return (2);
}

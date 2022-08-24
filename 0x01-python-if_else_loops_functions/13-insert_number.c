#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

/**
 * insert_node - inserts a number into a sorted singly linked list
 * @head: head of list
 * @number: number to be added
 *
 * Return: address of new node, or NULL if it failed
 */

listint_t *insert_node(listint_t **head, int number)
{
	listint_t *new, *future;

	future = *head;
	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = number;

	if (*head == NULL || (*head)->n > number)
	{
		new->next = *head;
		*head = new;
		return (new);
	}

	while (future->next != NULL)
	{
		if ((future->next)->n >= number)
		{
			new->next = future->next;
			future->next = new;
			return (new);
		}
		future = future->next;
	}
	future->next = new;
	new->next = NULL;
	return (new);
}

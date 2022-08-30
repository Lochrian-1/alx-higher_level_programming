#include "lists.h"
#include <stdlib.h>

/**
 * is_palindrome - checks if a singly linked list is a palindrome
 * @head: head of linked list
 *
 * Return: void
 */

int is_palindrome(listint_t **head)
{
	listint_t *rev_list, *node, *next, *previous;

	if (head == NULL)
		return (1);

	rev_list = malloc(sizeof(listint_t));

	node = *head;
	previous = NULL;
	while (node != NULL)
	{
		next = node->next;
		node->next = previous;
		previous = node;
		node = next;
	}
	node = previous;
	rev_list = node;


	if (*head == rev_list)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

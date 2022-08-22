#include "lists.h"

/**
 * check_cycle - checks if a singly linked list has a cycle in it
 * list - linked list
 *
 * Return: 0 if cycle, 1 if no cycle
 */

int check_cycle(listint_t *list)
{
	listint_t *tortoise, *hare;
	
	slow = list;
	fast = list;

	while (slow && fast)
	{
		if (fast->next == NULL)
		{
			return (0);
		}
		
		slow = slow->next;
		fast = fast->next->next;
		if (slow == fast)
		{
			return (1);
		}
	}
	return (0);
}

#include "sort.h"

/**
 * swapping_nodes - Swap two nodes of a doubly-linked list.
 * @head: A pointer to the head of the doubly-linked list.
 * @ptr1: A pointer to the pointer of the first node to be swapped.
 * @ptr2: The second node to swap.
 */
void swapping_nodes(listint_t **head, listint_t **ptr1, listint_t *ptr2)
{
	(*ptr1)->next = ptr2->next;
	if (ptr2->next != NULL)
		ptr2->next->prev = *ptr1;
	ptr2->prev = (*ptr1)->prev;
	ptr2->next = *ptr1;
	if ((*ptr1)->prev != NULL)
		(*ptr1)->prev->next = ptr2;
	else
		*head = ptr2;
	(*ptr1)->prev = ptr2;
	*ptr1 = ptr2->prev;
}

/**
 * insertion_sort_list - sorts a doubly linked list of integers
 * in ascending order
 * @list: a pointer to the head of the doubly linked list
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *loop, *insert, *pos;

	if (list == NULL || *list == NULL || (*list)->next == NULL)
		return;

	for (loop = (*list)->next; loop != NULL; loop = pos)
	{
		pos = loop->next;
		insert = loop->prev;
		while (insert != NULL && loop->n < insert->n)
		{
			swapping_nodes(list, &insert, loop);
			print_list((const listint_t *)*list);
		}
	}
}

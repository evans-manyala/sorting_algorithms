#include "sort.h"
/**
 * insertion_sort_list - Function performs insertions sort
 * on a list.
 * @list: List to be sorted using insertion sort.
*/

void insertion_sort_list(listint_t **list)
{
	listint_t *current, *prev, *next;

	if (!*list || !(*list)->next)
		return; /*Empty list or single element*/
	for (current = *list; current; current = current->next)
	{
		prev = NULL;
		next = current->next;

		/*Find the insertion point for current node*/
		for (prev = current->prev; prev; prev = prev->prev)
		{
			if (prev->n > current->n)
				break;
		}
	}
}

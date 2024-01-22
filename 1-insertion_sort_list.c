#include "sort.h"

void insertion_sort_list(listint_t **list)
{
	listint_t *current, *prev, *next;
	
	if (!*list || !(*list)->next)
		return; /*Empty list or single element*/
}

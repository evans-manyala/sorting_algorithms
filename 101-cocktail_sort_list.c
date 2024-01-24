#include "sort.h"
/**
 * cocktail_sort_list - Sorts a doubly linked list of integers
 *                      in ascending order using Cocktail Shaker Sort.
 * @list: A pointer to the head of the doubly linked list.
 */
void cocktail_sort_list(listint_t **list);
{
	int swapped;
	listint_t *prev, *next, *current;

	if (*list == NULL || (*list)->next == NULL)
		return;
}

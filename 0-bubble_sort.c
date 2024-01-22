#include "sort.h"
/**
 * bubble_sort - sorts an array of integers in ascending order
 * @array: the array to be sorted
 * @size: size of the array
 */

void bubble_sort(int *array, size_t size)
{
	size_t x, y;
	int temp, swapped;

	if (array == NULL || size < 2) /* Check for NULL array or size less than 2 */
		return;

	for (x = 0; x < size - 1; x++)
	{
		swapped = 0; /* Flag to track if any swaps occurred in a pass */

		/* Iterate through adjacent elements in each pass */
		for (y = 0; y < size - x - 1; y++)
		{
			/* If elements are out of order, swap them */
			if (array[y] > array[y + 1])
			{
				temp = array[y];
				array[y] = array[y + 1];
				array[y + 1] = temp;
				swapped = 1;
				/* Print the array after the swap */
				print_array(array, size);
			}
		}
		/* If no swaps occurred in a pass, the array is sorted, so break */
		if (swapped == 0)
			return;
	}
}

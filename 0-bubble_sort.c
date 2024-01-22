#include "sort.h"
/**
 * swapped - Function swaps values in array.
 * @num1: 1st value in array to be swapped.
 * @num2: 2nd value in array to be swapped.
*/
void swapped(int *num1, int *num2)
{
	int temp;

	temp = *num1;
	*num1 = *num2;
	*num2 = temp;
}

/**
 * bubble_sort - sorts an array of integers in ascending order
 * using Bubble Sort Algorithm
 * @array:  array to be sorted
 * @size: array size
 */

void bubble_sort(int *array, size_t size)
{
	size_t x, y;
	int num_of_swaps;

	if (array == NULL || size < 2) /* Check for NULL array or size less than 2 */
		return;

	for (x = 0; x < size - 1; x++)
	{
		num_of_swaps = 0;
		/* Iterate through adjacent elements in each pass */
		for (y = 0; y < size - x - 1; y++)
		{
			/* If elements are out of order, swap them */
			if (array[y] > array[y + 1])
			{
				num_of_swaps = 1;
				swapped(&array[y], &array[y + 1]);
				/* Print the array after the swap */
				print_array(array, size);
			}
		}
		/* If no swaps occurred in a pass, the array is sorted, so break */
		if (num_of_swaps == 0)
			break;
	}
}

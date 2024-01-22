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
 * selection_sort - sorts an array of integers in ascending order
 * using Selection Sort Algorithm
 * @array:  array to be sorted
 * @size: array size
 */
void selection_sort(int *array, size_t size)
{
	size_t x, y, min_index;

	if (array == NULL || size < 2)
		return;

	for (x = 0; x < size - 1; x++)
	{
		min_index = x;

		for (y = x + 1; y < size; y++)
		{
			if (array[y] < array[min_index])
				min_index = y;
		}

		if (min_index != x)
		{
			/*Swap elements*/
			swapped(&array[x], &array[min_index]);
			/*Print array after swap*/
			print_array(array, size);
		}
	}
}

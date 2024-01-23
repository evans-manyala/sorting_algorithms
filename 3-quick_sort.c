#include "sort.h"

/**
 * swapped - Function swaps values in array.
 * @num1: 1st value in array to be swapped.
 * @num2: 2nd value in array to be swapped.
 */
void swapped(int *num1, int *num2)
{
	int temp = *num1;
	*num1 = *num2;
	*num2 = temp;
}
/**
 * lomuto_partition - Lomuto partition scheme for Quick Sort.
 * @array: array to be partitioned
 * @low: low index of the partition
 * @high: high index of the partition
 * Return: index of the pivot
 */
size_t lomuto_partition(int *array, int low, int high)
{
	int pivot = array[high];
	int x = low - 1;
	int y;

	for (y = low; y < high; y++)
	{
		if (array[y] <= pivot)
		{
			x++;
			swapped(&array[x], &array[y]);
			print_array(array, high + 1);
		}
	}

	swapped(&array[x + 1], &array[high]);
	print_array(array, high + 1);
	return (x + 1);
}
/**
 * quick_sort_helper- Recursive function to perform Lomuto Quick Sort.
 * @array: array to be sorted
 * @low: low index of the partition
 * @high: high index of the partition
 */
void quick_sort_helper(int *array, int low, int high)
{
	if (low < high)
	{
		int pivot_index = lomuto_partition(array, low, high);

		quick_sort_helper(array, low, pivot_index - 1);
		quick_sort_helper(array, pivot_index + 1, high);
	}
}

/**
 * quick_sort - sorts an array of integers in ascending order
 * using Quick Sort Algorithm (Lomuto partition scheme)
 * @array: array to be sorted
 * @size: array size
 */
void quick_sort(int *array, size_t size)
{
	if (array == NULL || size <= 1)
	{
		return;
	}

	quick_sort_helper(array, 0, size - 1);
}

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
 * lomuto_partition - Lomuto partition scheme for Quick Sort.
 * @array: array to be partitioned
 * @low: low index of the partition
 * @high: high index of the partition
 * @size: array size
 * Return: index of the pivot
 */
size_t lomuto_partition(int *array, size_t low, size_t high, size_t size)
{
	int pivot = array[high];
	size_t x = low - 1;
	size_t y;

	for (y = low; y <= high - 1; y++)
	{
		if (array[y] < pivot)
		{
			x++;
			swapped(&array[x], &array[y]);
			print_array(array, size);
		}
	}

	swapped(&array[x + 1], &array[high]);
	print_array(array, size);

	return (x + 1);
}
/**
 * quick_sort_helper - Recursive function to perform Lomuto Quick Sort.
 * @array: array to be sorted
 * @low: low index of the partition
 * @high: high index of the partition
 * @size: array size
 */
void quick_sort_helper(int *array, ssize_t low, ssize_t high, size_t size)
{
	if (low < high)
	{
		size_t pivot_index = lomuto_partition(array, low, high, size);

		quick_sort_helper(array, low, pivot_index - 1, size);
		quick_sort_helper(array, pivot_index + 1, high, size);
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
	if (array == NULL || size < 2)
		return;

	quick_sort_helper(array, 0, size - 1, size);
}

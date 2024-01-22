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

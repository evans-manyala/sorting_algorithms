# Sorting Algorithms

# 0x1B. C - Sorting algorithms & Big O

# Bubble Sort

What it is:

Bubble Sort is a simple sorting algorithm that repeatedly compares adjacent elements in a list and swaps them if they are in the wrong order.
It's named for the way larger elements "bubble" up to the end of the list, like air bubbles rising to the surface of water.

How it works:

Initialization:

Start with the first element in the list.
Comparison and Swapping:

Compare the current element with the next element.
If the current element is greater than the next element, swap their positions.
Iteration:

Move to the next element and repeat step 2 until you reach the end of the list.
This completes one "pass" through the list.
Repeat Passes:

Continue making passes through the list until no more swaps are needed. This indicates that the list is sorted.
Example:

Consider the unsorted list [5, 2, 4, 6, 1]:

Pass 1:
[2, 5, 4, 6, 1] (swap 5 and 2)
[2, 4, 5, 6, 1] (swap 5 and 4)
[2, 4, 5, 1, 6] (swap 6 and 1)
Pass 2:
[2, 4, 1, 5, 6] (swap 5 and 1)
Pass 3:
[2, 1, 4, 5, 6] (swap 4 and 1)
Pass 4:
No swaps needed, list is sorted: [1, 2, 4, 5, 6]
Key points:

Time complexity: O(n^2), meaning its performance worsens significantly as the list size increases.
Space complexity: O(1), meaning it doesn't require extra memory beyond the original list.
Stable sorting algorithm: Maintains the relative order of elements with equal values.
Not efficient for large datasets: Due to its time complexity, it's not preferred for sorting large lists.
Simple to understand and implement: Often used for teaching sorting concepts.
Optimization:

Early termination: Stop when no swaps occur in a pass, indicating the list is already sorted.
When to use it:

Best suited for small lists or educational purposes.
For larger datasets, more efficient sorting algorithms like Quick Sort, Merge Sort, or Heap Sort are preferred.

#include <stdio.h>
#include <stdlib.h>
#include "sort.h"

/**
 * bubble_sort - is a simple sorting algorithm that repeatedly steps
 * through the list, compares adjacent elements and swaps them if they
 * are in the wrong order.
 *
 * @array: Array of the integer list
 * @size: Size of the array
 *
 * Return: void function
 */

void selection_sort(int *array, size_t size)
{
	size_t a, b, val_min;
	int tmp;

	if (size == 0)
		return;
	for (a = 0; a < size - 1; a++)
	{
		val_min = a;
		for (b = a + 1; b < size; b++)
		{
			if(array[val_min] > array[b])
				val_min = b;
		}
		if (val_min != a)
		{
			tmp = array[a];
			array[a] = array[val_min];
			array[val_min] = tmp;
			print_array(array, size);
		}
	}
}

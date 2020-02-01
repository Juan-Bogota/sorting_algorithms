#include <stdio.h>
#include <stdlib.h>
#include "sort.h"

/**
 * create_listint - Creates a doubly linked list from an array of integers
 *
 * @array: Array to convert to a doubly linked list
 * @size: Size of the array
 *
 * Return: Pointer to the first element of the created list. NULL on failure
 */

void bubble_sort(int *array, size_t size)
{
	size_t a, b;
	int tmp;

	for(a = 0; a < size -1; a++)
	{
		for(b = 0; b < size - 1 ; b++)
		{
			if(array[b] > array[b + 1])
			{
				tmp = array[b];
				array[b] = array[b + 1];
				array[b + 1] = tmp;
				print_array(array, size);
			}
		}
	}
}

#include <stdio.h>
#include <stdlib.h>
#include "sort.h"


void swap(int* a, int* b) 
{
	int t = *a; 
	*a = *b; 
	*b = t; 
}


/**
 * selection_sort - is a sorting algorithm, specifically
 * an in-place comparison sort.
 * @array: Array of the integer list
 * @size: Size of the array
 *
 * Return: void function
 */

int partition (int arr[], int low, int high) 
{
	int pivot = arr[high];
	int i = (low - 1), j;

	for (j = low; j <= high- 1; j++)
	{
		if (arr[j] < pivot)
		{
			i++;
			swap(&arr[i], &arr[j]);
			print_array(arr, high + 1);

		}
	}
	swap(&arr[i + 1], &arr[high]); 
	return (i + 1); 
} 



/**
 * selection_sort - is a sorting algorithm, specifically
 * an in-place comparison sort.
 * @array: Array of the integer list
 * @size: Size of the array
 *
 * Return: void function
 */
void quickSort(int arr[], int low, int high)
{
	if (low < high)
	{
		int pi = partition(arr, low, high);

		quickSort(arr, low, pi - 1);
		quickSort(arr, pi + 1, high);
	}
}


void quick_sort(int *array, size_t size)
{
	size_t start = 0;
	size_t end = size - 1;

	if (size > 0)
		quickSort(array, start, end);

}

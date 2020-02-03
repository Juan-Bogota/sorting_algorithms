#include "sort.h"

/**
 * create_listint - Creates a doubly linked list from an array of integers
 *
 * @array: Array to convert to a doubly linked list
 * @size: Size of the array
 *
 * Return: Pointer to the first element of the created list. NULL on failure
 */

void insertion_sort_list(listint_t **list)
{
	listint_t *tmp = *list, *tmp1 = tmp->next;
	int index = 0, i;


	while(tmp1 != NULL)
	{
		if(tmp->n > tmp1->n)
		{
			tmp1->prev = tmp->prev;
			tmp->next = tmp1->next;
			tmp->prev = tmp1;
			tmp1->next = tmp;
			if(tmp->prev == NULL)
				tmp->next->prev = tmp;
			else if(tmp->next == NULL)
					tmp1->prev->next = tmp1;
			else
			{
				tmp->next->prev = tmp;
				tmp1->prev->next = tmp1;
			}
			print_list(*list);
			tmp = tmp1->prev;
			while(tmp != NULL)
			{
				if(tmp->n > tmp1->n)
				{
					tmp1->prev = tmp->prev;
					tmp->next = tmp1->next;
					tmp->prev = tmp1;
					tmp1->next = tmp;
					if(tmp1->prev == NULL)
					{
						tmp->next->prev = tmp;
						*list = tmp1;
					}
					else
					{
						tmp->next->prev = tmp;
						tmp1->prev->next = tmp1;
					}
					print_list(*list);
				}
				tmp1 = tmp;
				tmp = tmp->prev;
			}
		}
		tmp = *list;
		index += 1;
		for(i = 0; index > i; i++)
		{
			tmp = tmp->next;
			tmp1 = tmp->next;
		}
	}
}

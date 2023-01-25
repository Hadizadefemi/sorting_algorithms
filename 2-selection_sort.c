#include "sort.h"

/**
 * selection_sort - sorts an array of integers using selction sort
 * @array: array to sort
 * @size: size of the array
 */
void selection_sort(int *array, size_t size)
{
	size_t i, j, temp, min_idx;
	int flag;

	for (i = 0; i < size - 1; i++)
	{
		min_idx = i;
		for (j = i + 1; j < size; j++)
		{
			if (*(array + min_idx) > *(array + j))
			{
				min_idx = j;
				flag = 1;
			}
		}
		if (flag == 1)
		{
			temp = *(array + min_idx);
			*(array + min_idx) = *(array + i);
			*(array + i) = temp;
			print_array(array, size);
		}
		flag = 0;
	}
}

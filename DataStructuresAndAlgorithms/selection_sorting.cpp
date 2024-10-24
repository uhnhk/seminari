#include "selection_sorting.h"

template <typename T>
void selection_sort(T arr[], int n )
{
	for (int i = 0; i < n; i++)
	{
		T min = arr[i];
		int min_index = i;

		for (int j = i; j < n; j++)
		{
			if (arr[j] < min)
			{
				min = arr[j];
				min_index = j;
			}
		}

		T transfer = arr[i];
		arr[i] = arr[min_index];
		arr[min_index] = transfer;
	}
}

template void selection_sort<int>(int[], int);
template void selection_sort<double>(double[], int);
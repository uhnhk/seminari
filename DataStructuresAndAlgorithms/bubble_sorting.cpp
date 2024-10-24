#include "bubble_sorting.h"

template <typename T>
void bubble_sort(T arr[], int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < (n - i - 1); j++)
		{
			T transfer = arr[j];
			if (arr[j] > arr[j + 1])
			{
				arr[j] = arr[j + 1];
				arr[j + 1] = transfer;
			}
		}
	}
}

template void bubble_sort<int>(int[], int);
template void bubble_sort<double>(double[], int);
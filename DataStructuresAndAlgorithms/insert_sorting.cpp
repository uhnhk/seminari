#include "insert_sorting.h"

template <typename T>
void insert_sort(T arr[], int n)
{
	for (int i = 1; i < n; i++)
	{
		for (int j = i; j > 0; j--)
		{
			T transfer = arr[j - 1];
			if (arr[j] < arr[j - 1])
			{
				arr[j - 1] = arr[j];
				arr[j] = transfer;
			}
			else break;
		}
	}
}

template void insert_sort<int>(int[], int);
template void insert_sort<double>(double[], int);
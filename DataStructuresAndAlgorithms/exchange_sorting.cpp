#include "exchange_sorting.h"

template <typename T>
void exchange_sort(T arr[], int n )
{
	for (int i = 0; i < (n - 1); i++)
	{
		for (int j = (i + 1); j < n; j++) {
			T transfer = arr[i];
			if (arr[j] < arr[i])
			{
				arr[i] = arr[j];
				arr[j] = transfer;
			}
		}
	}
}

template void exchange_sort<int>(int[], int);
template void exchange_sort<double>(double[], int);
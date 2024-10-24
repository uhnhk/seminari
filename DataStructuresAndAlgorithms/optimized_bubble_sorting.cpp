#include "optimized_bubble_sorting.h"

template <typename T>
void optimized_bubble_sort(T arr[], int n )
{
	for (int i = 0; i < n; i++)
	{
		bool swtchng = false;
		for (int j = 0; j < (n - i - 1); j++)
		{
			T transfer = arr[j];
			if (arr[j] > arr[j + 1])
			{
				arr[j] = arr[j + 1];
				arr[j + 1] = transfer;
				swtchng = 1;
			}
		}
		if (!swtchng) break;
	}
}

template void optimized_bubble_sort<int>(int[], int);
template void optimized_bubble_sort<double>(double[], int);
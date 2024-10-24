#include "shaker_sorting.h"

template <typename T>
void shaker_sort(T arr[], int n) {
    bool swapped = true;
    int start = 0;
    int end = n - 1;

    while (swapped) {
        swapped = false;

        for (int i = start; i < end; ++i) {
            if (arr[i] > arr[i + 1]) {
                T temp = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = temp;
                swapped = true;
            }
        }

        if (swapped == 0) {
            break;
        }

        swapped = false;
        --end;

        for (int i = end - 1; i >= start; --i ) {
            if (arr[i] > arr[i + 1]) {
                T temp = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = temp;
                swapped = true;
            }
        }

        ++start;
    }
}

template void shaker_sort<int>(int[], int);
template void shaker_sort<double>(double[], int);
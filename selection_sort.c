#include"sorting_algorithms.h"

void selection_sort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        int min_value_idx = i;

        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[min_value_idx]) {
                min_value_idx = j;
            }
        }

        if (min_value_idx != i) {
            int temp = arr[min_value_idx];
            arr[min_value_idx] = arr[i];
            arr[i] = temp;
        }
    }
}
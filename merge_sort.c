#include"sorting_algorithms.h"

static void merge(int arr[], int left, int right) {
    int new_array[right - left + 1];
    int medium = (left + right) / 2;

    int i = 0;
    int j = left;
    int k = medium + 1;

    while (j <= medium && k <= right) {
        if (arr[j] <= arr[k]) {
            new_array[i++] = arr[j++];
        } else {
            new_array[i++] = arr[k++];
        }
    }

    while (j <= medium) {
        new_array[i++] = arr[j++];
    }

    while (k <= right) {
        new_array[i++] = arr[k++];
    }

    for (i = 0; i < right - left + 1; i++) {
        arr[left + i] = new_array[i];
    }   
}

void merge_sort(int arr[], int left, int right) {
    if (left >= right) {
        return;
    }

    int medium = (left + right) / 2;
    
    merge_sort(arr, left, medium);
    merge_sort(arr, medium + 1, right);

    merge(arr, left, right);
}

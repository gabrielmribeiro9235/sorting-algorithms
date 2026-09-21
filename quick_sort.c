#include"sorting_algorithms.h"

static int partition(int arr[], int left, int right) {
    int pivot = arr[right];
    int j = left;

    for (int i = left; i < right; i++) {
        if (arr[i] < pivot) {
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j++] = temp; 
        }
    }

    arr[right] = arr[j];
    arr[j] = pivot;

    return j;
}

void quick_sort(int arr[], int left, int right) {
    if (left >= right) {
        return;
    }

    int pivot = partition(arr, left, right);

    quick_sort(arr, left, pivot - 1);
    quick_sort(arr, pivot + 1, right);
}
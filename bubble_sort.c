#include"sorting_algorithms.h"

void bubble_sort(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        int swap = 0;

        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                swap = 1;
            }
        }

        if (swap == 0) {
            break;
        }
    }
}

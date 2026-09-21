#include<stdio.h>
#include"src/sorting_algorithms.h"

void print_array(int arr[], int n) {
    printf("[");

    for (int i = 0; i < n; i++) {
        printf("%d", arr[i]);
        if (i != n - 1) {
            printf(", ");
        }
    }

    printf("]");
}

int main() {
    int array1[] = {10, 4, 3, 7, 1, 8, 1, 2};
    int array2[] = {10, 4, 3, 7, 1, 8, 1, 2};
    int array3[] = {10, 4, 3, 7, 1, 8, 1, 2};
    int array4[] = {10, 4, 3, 7, 1, 8, 1, 2};
    int array5[] = {10, 4, 3, 7, 1, 8, 1, 2};

    printf("-------------------------------------\n");
    printf("Array: ");
    print_array(array1, sizeof(array1) / sizeof(array1[0]));

    printf("\n-------------------------------------\n");
    printf("Sorted with bubble sort:\n");
    bubble_sort(array1, sizeof(array1) / sizeof(array1[0]));
    print_array(array1, sizeof(array1) / sizeof(array1[0]));

    printf("\n-------------------------------------\n");
    printf("Sorted with selection sort:\n");
    selection_sort(array2, sizeof(array2) / sizeof(array2[0]));
    print_array(array2, sizeof(array2) / sizeof(array2[0]));

    printf("\n-------------------------------------\n");
    printf("Sorted with insertion sort:\n");
    insertion_sort(array3, sizeof(array3) / sizeof(array3[0]));
    print_array(array3, sizeof(array3) / sizeof(array3[0]));

    printf("\n-------------------------------------\n");
    printf("Sorted with merge sort:\n");
    merge_sort(array4, 0, sizeof(array4) / sizeof(array4[0]) - 1);
    print_array(array4, sizeof(array4) / sizeof(array4[0]));

    printf("\n-------------------------------------\n");
    printf("Sorted with quick sort:\n");
    quick_sort(array5, 0, sizeof(array5) / sizeof(array5[0]) - 1);
    print_array(array5, sizeof(array5) / sizeof(array5[0]));
    printf("\n-------------------------------------\n");

    return 0;
}

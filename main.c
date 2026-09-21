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

    return 0;
}

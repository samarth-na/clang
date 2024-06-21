#include <complex.h>
#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 10

int bubble_sort(int arr[], int length) {

    // 11,2,3,4,5,45,3,56,6,346,7345,5,234,24,53
    int i1, i2, temporary;
    for (i1 = 0; i1 < length - 1; i1++) {
        for (i2 = 0; i2 < length - i1 - 1; i2++) {
            if (arr[i2] > arr[i2 + 1]) {
                // Swap arr[j] and arr[j+1]
                temporary = arr[i2];
                arr[i2] = arr[i2 + 1];
                arr[i2 + 1] = temporary;
            }
        }
    }
    return EXIT_SUCCESS;
}
int main(int argc, char *argv[]) {
    int arr[MAX_SIZE] = {3, 6, 1, 8, 4, 0, 2, 9, 7, 5};

    printf("Before sorting: \n");
    for (int i = 0; i < MAX_SIZE; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    bubble_sort(arr, MAX_SIZE);

    printf("\nAfter sorting: \n");
    for (int i = 0; i < MAX_SIZE; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}

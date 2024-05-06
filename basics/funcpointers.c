#include <stdio.h>

void printArray(int *arr, int size) {
    printf("Array elements: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", *(arr + i)); // Dereferencing the pointer
    }
    printf("\n");
}

int main() {
    int arr[] = {10, 20, 30, 40, 50}; // Initialize an array
    int size = sizeof(arr) / sizeof(arr[0]); // Get the size of the array

    // Pointer pointing to the first element of the array
    int *ptr = arr;

    // Print array elements using the pointer
    printArray(ptr, size);

    // Modify array elements using the pointer
    for (int i = 0; i < size; i++) {
        *(ptr + i) += 5; // Increment each element by 5
    }

    // Print the modified array
    printf("Modified array elements: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}

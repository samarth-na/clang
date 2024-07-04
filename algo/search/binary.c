#include <stdio.h>

// Binary search function
// Returns the index of the target if found, otherwise returns -1
int binarySearch(int arr[], int left, int right, int target) {
    while (left <= right) {
        int mid = left + (right - left) / 2;

        // Check if target is present at mid
        if (arr[mid] == target)
            return mid;

        // If target greater, ignore left half
        if (arr[mid] < target)
            left = mid + 1;

        // If target is smaller, ignore right half
        else
            right = mid - 1;
    }

    // If we reach here, then the element was not present
    return -1;
}

// Function to print an array
void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

// Main function to demonstrate binary search
int main() {
    int arr[] = {2, 3, 4, 10, 40};
    int n = sizeof(arr) / sizeof(arr[0]);
    int target = 10;

    printf("Array: ");
    printArray(arr, n);

    int result = binarySearch(arr, 0, n - 1, target);
    if (result == -1)
        printf("Element %d is not present in array\n", target);
    else
        printf("Element %d is present at index %d\n", target, result);

    return 0;
}

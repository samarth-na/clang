#include <stdio.h>

int linearSearch() {}
int binarySearch(int arr[], int left, int right, int target) {
    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (arr[mid] == target)
            return mid; // Target found at index mid

        if (arr[mid] < target)
            left = mid + 1; // Target is in the right half
        else
            right = mid - 1; // Target is in the left half
    }

    // Target not found
    return -1;
}

int main() {
    int arr[] = {1, 3, 5, 7, 9};
    int n = sizeof(arr) / sizeof(arr[0]);
    int target = 7;

    int index = binarySearch(arr, 0, n - 1, target);

    if (index == -1)
        printf("Target not found in the array\n");
    else
        printf("Target found at index %d\n", index);

    return 0;
}

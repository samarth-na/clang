#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

int sortedArray[] = {2,  3,  4,  5,  10, 12, 15, 20, 25, 30, 35, 40,
                     45, 50, 55, 60, 65, 70, 75, 80, 85, 90, 95, 100};

int binarySearch(int array[], int leftIndex, int rightIndex, int targetValue) {
    if (rightIndex >= leftIndex) {

        int midpointIndex = leftIndex + (rightIndex - leftIndex) / 2;
        printf("midpointIndex = %d rightIndex= %d leftIndex= %d\n",
               midpointIndex, rightIndex, leftIndex);

        // If the element is present at the midpoint
        if (array[midpointIndex] == targetValue) {
            return midpointIndex;
        }

        // If the element is smaller than the midpoint, it can only be present
        // in the left subarray
        if (array[midpointIndex] > targetValue) {
            return binarySearch(array, leftIndex, midpointIndex - 1,
                                targetValue);
        }

        // Else the element can only be present in the right subarray
        return binarySearch(array, midpointIndex + 1, rightIndex, targetValue);
    }

    // Element is not present in the array
    printf("Target element not in the list\n");
    return -1;
}

int main(int argc, char *argv[]) {
    int arraySize = sizeof(sortedArray) / sizeof(sortedArray[0]);
    int targetValue = 2;
    int searchResult = binarySearch(sortedArray, 0, arraySize - 1, targetValue);

    if (searchResult != -1) {
        printf("Element %d found at index %d\n", targetValue, searchResult);
    } else {
        printf("Element %d not found in the array\n", targetValue);
    }

    return EXIT_SUCCESS;
}

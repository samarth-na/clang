#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

int sorted_array[] = {2, 3, 4, 10, 40};

int binary_search(int target, int midpoint, int arr[]) {
    int length = midpoint * 2;
    if (arr[length] < target) {
        printf("target element not in list");
        return EXIT_FAILURE;
    }

    if (arr[0] > target) {
        printf("target element not in list");
        return EXIT_FAILURE;
    }

    printf("midpoint = %d\n", midpoint);

    if (target == arr[midpoint]) {
        return arr[target];
    }
    if (target > arr[midpoint]) {
        int newmidpoint = (midpoint / 2);
        return binary_search(target, newmidpoint, arr);
    }
    if (target < arr[midpoint]) {

        int newmidpoint = midpoint + (midpoint / 2);
        return binary_search(target, newmidpoint, arr);
    }

    return 0;
}
int main(int argc, char *argv[]) {
    printf("hello %d\n", sorted_array[2]);

    int n = sizeof(sorted_array) / sizeof(sorted_array[0]);

    binary_search(2, n / 2, sorted_array);
    return EXIT_SUCCESS;
}

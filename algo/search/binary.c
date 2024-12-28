#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

int sorted_array[] = {2, 3, 4, 10, 40};

int binary_search(int target, int low, int high, int arr[]) {
	if (low > high) {
		printf("Target element not in list\n");
		return -1;	// Indicates failure
	}

	int midpoint = low + (high - low) / 2;	// Calculate midpoint
	printf("midpoint = %d\n", midpoint);

	if (arr[midpoint] == target) {
		return midpoint;  // Found the target
	}

	if (target > arr[midpoint]) {
		return binary_search(target, midpoint + 1, high, arr);	// Search in the right half
	} else {
		return binary_search(target, low, midpoint - 1, arr);  // Search in the left half
	}
}

int main(int argc, char *argv[]) {
	int n = sizeof(sorted_array) / sizeof(sorted_array[0]);
	int target = 10;

	int result = binary_search(target, 0, n - 1, sorted_array);

	if (result != -1) {
		printf("Target found at index %d\n", result);
	}

	return EXIT_SUCCESS;
}

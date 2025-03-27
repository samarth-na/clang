#include <stdio.h>

// Function to swap two elements
void swap(int* a, int* b) {
	int temp = *a;
	*a = *b;
	*b = temp;
}

// Binary search function
int binarySearch(int arr[], int size, int target) {
	if (size == 0)
		return -1;
	int low = 0;
	int high = size - 1;

	while (low <= high) {
		int mid = (low + high) / 2;
		if (arr[mid] == target) {
			return mid;
		} else if (arr[mid] < target) {
			low = mid + 1;
		} else {
			high = mid - 1;
		}
		if (low > high)
			return -1;

		// Swap elements
		swap(&arr[low], &arr[high]);
	}
	return -1;
}

// Main function
int main() {
	// Example array
	int arr[] = {2, 5, 8, 12, 16, 23, 38, 56, 72, 91};

	printf("Original Array: ");
	for (int i = 0; i < 10; i++) printf("%d ", arr[i]);

	int target = 23;
	printf("\nSearch for %d: %d\n", target,
		   binarySearch(arr, sizeof(arr) / sizeof(arr[0]), target));

	return 0;
}

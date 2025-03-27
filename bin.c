
#include <stdio.h>

// Function to perform binary search on sorted array.
int binarySearch(int arr[], int l, int r, int x) {
	while (r >= l) {
		int mid = l + (r - l) / 2;	// Calculate middle index.

		if (arr[mid] == x)
			return mid;

		if (arr[mid] > x)
			r = mid - 1;
		else
			l = mid + 1;
	}

	return -1;
}

int main() {
	int arr[] = {2, 3, 4, 5, 6, 7, 8};	// Example sorted array.
	int n = sizeof(arr) / sizeof(arr[0]);
	int x = 5;	// Element to search.

	printf("Position of %d in the array: ", x);

	if (binarySearch(arr, 0, n - 1, x) != -1)
		printf("%d\n", binarySearch(arr, 0, n - 1, x));
	else
		printf("Element not found.\n");

	return 0;
}

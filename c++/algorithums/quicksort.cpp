#include <iostream>
#include <vector>

using namespace std;

vector<int> quickSort(vector<int>& arr) {
	if (arr.size() <= 1) {
		return arr;
	}

	int pivot = arr[0];
	vector<int> left, right;

	// Start from index 1 since pivot is arr[0]
	for (int i = 1; i < arr.size(); i++) {
		if (arr[i] <= pivot) {
			left.push_back(arr[i]);
		} else {
			right.push_back(arr[i]);
		}
	}

	// Don't forget to include pivot
	left.push_back(pivot);

	// Recursive calls
	left = quickSort(left);
	right = quickSort(right);

	// Combine results
	left.insert(left.end(), right.begin(), right.end());
	return left;
}
// algorithm
//
// function quickSort(arr)
// if arr.length <= 1
// return arr
// pivot = arr[0]
// right = arr[]
// left = arr[]
// for (int i in arr)
// if pivot <= i
// push i to left
// else push i to right
// return quickSort(left) + quickSort(right)
//
//
//
//
//
//

int main(int argc, char* argv[]) {
	vector<int> arr = {10, 2, 31, 14, 4, 5, 56, 7, 8, 9, 10};
	for (int i : arr) {
		cout << i << " ";
	}
	return 0;
}

#include <iostream>

void display(int arr[10]) {
	for (int i = 0; i < 9; i++) {
		std::cout << arr[i] << " ";
	}
	std::cout << "\n";
}

void search_duplicates(int arr[10]) {
	for (int i = 0; i < 9; i++) {
		for (int j = i + 1; j < 10; j++) {
			if (arr[i] == arr[j]) {
				std::cout << arr[i] << " has an duplicate" << std::endl;
			}
		}
	}
}
int main() {
	int arr[10] = {1, 2, 3, 3, 4, 5, 5, 6, 7, 3};
	display(arr);
	search_duplicates(arr);
}

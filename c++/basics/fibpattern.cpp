#include <iostream>
using namespace std;

int main() {
	int n;

	cout << "Enter the number ";
	cin >> n;

	if (n <= 0) {
		return 1;
	}

	long long first = 0, second = 1, next;

	cout << "Fibonacci Series: ";

	for (int i = 1; i < n; i++) {
		if (i <= 1) {
			next = i;  // First two terms are 0 and 1
		} else {
			next = first + second;	// Sum of previous two
			first = second;			// Shift for next iteration
			second = next;
		}

		for (int j = 0; j < i; j++) {
			cout << next << " ";
		}
	}

	cout << endl;
	return 0;
}

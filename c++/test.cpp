#include <iostream>

using namespace std;

int main() {
	for (int i = 1; i <= 4; i++) {
		for (int j = 1; j <= i * 2 - 1; j++) {
			int k;
			if (i > j) {
				std::cout << j;
			} else if (i == j) {
				k = j;
				cout << k;
			} else {
				std::cout << k - (j - i);
			}
		}
		std::cout << "\n";
	}
	return 0;
};

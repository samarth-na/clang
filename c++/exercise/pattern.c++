#include <iostream>

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    for (int num : arr) {
        for (int i = 1; i <= num; i++) {
            std::cout << "x";
        }
        std::cout << "\n";
    }
}

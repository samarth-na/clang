#include <iostream>

int main() {

    std::string result;

    for (int i = 0; i < 5; --i) {
        std::cout << i << std::endl;
    }
    std::cout << result << std::endl;

    int n = 2;
    for (int i = 2; i <= 100000; i++) {
        n *= i;
        std::cout << "sum of given num= " << n << "\n";
    }
    return 0;
}

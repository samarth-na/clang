#include <iostream>

void IntToChr(int integer) {
    while (integer >= 1) {
        int i = integer % 10;
        integer /= 10;
        std::cout << i << "\n";
    };
};
int main() { IntToChr(12312); }

#include <cstdlib>
#include <iostream>

void IntToChr(int integer) {
    while (integer >= 1) {
        int i = integer % 10;
        integer /= 10;
        std::cout << i << "\n";
    };
};
int recurstion(int num) {
    std::cout << num % 10 << "\n";
    if (num < 10) {
        return 0;
    }
    return recurstion(num / 10);
}

int main() {
    int num = 3;

    recurstion(12312);
}

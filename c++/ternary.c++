#include <iostream>
int x = 4;
int main() {
    std::cout << "hello" << std::endl;
    x = 5;
    int y = 5;
    while (x > 0) {
        int y = (x > 2) ? 10 : 20;
        std::cout << y << "\n" << x << std::endl;
        x--;
        y++;
    }
}

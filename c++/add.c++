#include <iostream>
int a, b, c, d;
int main() {

    std::cout << "enter a : ";
    std::cin >> a;
    std::cout << "enter b : ";
    std::cin >> b;
    long b = 1;
    for (int i = 1; i <= a; i++) {
        b += i;
    }
    std::cout << b << "";
}

int add() {

    int a, b;
    std::cout << "enter a : ";
    std::cin >> a;
    std::cout << "enter b : ";
    std::cin >> b;
    return a + b;
}

#include <iostream>

int main() {
    int input;
    bool prime = true;

    std::cout << "Enter a number: ";
    std::cin >> input;

    if (input <= 1) {
        prime = false;
    } else {
        for (int i = 2; i * i <= input; i++) {
            if (input % i == 0) {
                prime = false;
                break;
            }
        }
    }

    if (prime) {
        std::cout << input << " is a prime number." << std::endl;
    } else {
        std::cout << input << " is not a prime number." << std::endl;
    }

    return 0;
}

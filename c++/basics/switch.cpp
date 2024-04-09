#include <iostream>
int main() {
    char x;
    std::cin >> x;
    switch (x) {
    case 'a':
        std::cout << '1'; // prints "1",
        break;
    case 2:
        std::cout << '2'; // then prints "2"
    }
    return 0;
}

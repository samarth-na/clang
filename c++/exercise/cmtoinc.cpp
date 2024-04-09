#include <iostream>

int main() {
    float cm = 100;
    int inc = (cm / 30) * 12;
    float exinc = inc % 12;
    int foot = inc / 12;
    std::cout << foot << " foot ans " << exinc << " inc";
}

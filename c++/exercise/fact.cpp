// sum of first n natural numbers

#include <iostream>
using std::cout, std::cin;
int main() {
    int n;
    int sum = 0;
    cout << "enter n : ";
    cin >> n;

    for (int i = 0; i <= n; i++) {
        sum += i;
    }

    { cout << "the sum of " << n << " natural numbers is " << sum << "   "; }
}

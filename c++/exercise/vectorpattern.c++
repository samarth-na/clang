#include <iostream>
#include <vector>
using namespace std;

int main() {

    int a = 3;
    std::vector<int> v;
    v = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};

    for (int i : v) {
        std ::cout << i;

        char x = 'X';
        string X(i, 'x');
        cout << X << "\n";
    }
    return 0;
}

#include <iostream>
#include <vector>

using namespace std;

int pattern() {
    int arr[5] = {1, 2, 3, 4, 5};
    for (int i = 0; i < 5; i++) {
        std::cout << arr[i] << std::endl;
    }
    return 0;
}

vector<int> inttochr(int number) {
    vector<int> list;
    for (int i = 1; number >= 1; i++) {
        int ans = number % 10;
        number = number / 10;
        list.push_back(ans);
    }
    return list;
}
int *listt;
int main() {
    int number = 7346813;
    vector<int> list;
    list = inttochr(number);
    for (int val : list) {
        std::cout << " " << val << "\n";
    }
}

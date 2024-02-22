#include <iostream>
#include <vector>

void proccess(int number) {
    std::vector<int> list;
    for (int i = 1; number >= 1; i++) {
        int ans = number % 10;
        number = number / 10;
        list.push_back(ans);
    }
    for (int val : list) {
        std::cout << " " << val << "\n";
    }
}
int main() {
    int number = 7346813;
    return 0;
}

#include <iostream>
#include <vector>

using namespace std;
// datatype name( value ){
// funtion
// }
vector<int> proccess(int number) {
    vector<int> list;
    for (int i = 1; number >= 1; i++) {
        int ans = number % 10;
        number = number / 10;
        list.push_back(ans);
    }
    // for (int val : list) {
    //     std::cout << " " << val << "\n";
    // }
    return list;
}
int main() {
    int number = 7346813;
    vector<int> list;
    list = proccess(number);
    for (int val : list) {
        cout << " " << val << "\n";
    }
    return 0;
}

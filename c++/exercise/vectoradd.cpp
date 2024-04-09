#include <algorithm>
#include <iostream>
#include <vector>
using std::max;
using std::vector;
// brute method
// O(n^2)
int bruteForce(vector<int> &nums) {
    int maxSum = nums[0];
    for (int i = 0; i <= nums.size(); i++) {
        int curSum = 0;
        for (int j = i; j <= nums.size(); j++) {
            curSum += nums[j];
            maxSum = max(maxSum, curSum);
        }
    }
    return maxSum;
}

int main() {
    std::vector<int> num = {1, -2, 3, 4};
    int j = bruteForce(num);
    std::cout << j;
    std::cin.get();
}

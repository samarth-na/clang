#include <iostream>
#include <stack>
#include <vector>

using namespace std;

int solve(int N, vector<int> &C) {
    stack<int> chocolates;
    int total_chocolates_sold = 0;

    for (int i = 0; i < N; ++i) {
        if (C[i] == 0) {
            // Sell the box if it's empty
            total_chocolates_sold++;
        } else {
            // Receive a new box and add it to the stack
            chocolates.push(C[i]);
        }
    }

    // At this point, the stack contains the remaining boxes after N minutes.
    // We don't actually need to process the stack further since we're only
    // interested in the total number of chocolates sold, which we've tracked
    // separately.

    return total_chocolates_sold;
}

int main() {
    int N = 11;
    vector<int> C = {0, 10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
    cout << "Total number of chocolates sold: " << solve(N, C) << endl;
    return 0;
}

#include <iostream>
#include <vector>

using namespace std;

typedef vector<int> intvec;

int prefixSum(intvec vec) {
	int sum = 0;
	for (int n : vec) {
		sum += n;
	}
	return sum;
}
int main() {
	intvec nums = {1, 2, 3, 4, 5};
	int ans = prefixSum(nums);
	cout << ans << "\n";

	return 0;
}

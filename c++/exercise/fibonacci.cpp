#include <iostream>
using namespace std;

int reccursion(int n) {
	if (n == 0) {
		return n;
	} else {
		return n + reccursion(n - 1);
	}
}
int itteration(int n) {
	int fib = 0;
	for (int i = 0; i <= n; i++) {
		fib += i;
	}
	return fib;
}
int main() {
	int n;
	cout << "Enter a number: ";
	cin >> n;
	// cout << reccursion(n) <<  "\n";

	int ans = itteration(n);
	cout << ans << "\n";
	ans = reccursion(n);

	cout << ans << "\n";
	return 0;
}

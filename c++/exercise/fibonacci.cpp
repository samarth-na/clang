#include <iostream>
using namespace std;

int reccursion(int n) {
	if (n == 0 || n == 1) {
		return n;
	} else {
		return reccursion(n - 1) + reccursion(n - 2);
	}
}

int itteration(int n) {
	int fib = 1;
	for (int i = 2; i <= n; i++) {
		fib = fib + (fib - 1);
		std::cout << fib << "\n";
	}
	return fib;
}

int main() {
	int n;
	cout << "Enter a number: ";
	cin >> n;
	cout << reccursion(n) << "\n";
	int ans = itteration(n);
	cout << ans << " itteration \n";

	ans = reccursion(n);

	cout << ans << "  reccursion \n";
	return 0;
}

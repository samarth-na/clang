#include <iostream>

using namespace std;
void fizzbuzz(int number) {
	if (number > 100) {
		cout << "thats the limit" << endl;
		return;
	}
	if (number % 15 == 0) {
		cout << "divide by three and five " << endl;
	} else if (number % 5 == 0) {
		cout << "divide by five" << endl;
	} else if (number % 3 == 0) {
		cout << "divide by three" << endl;
	}
	cout << number << endl;
	return fizzbuzz(number + 1);
}
int main() {
	fizzbuzz(1);
	printf("end program\n");
	return 0;
}

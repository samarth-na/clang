#include <iostream>

using namespace std;

int math, english, physics, history, eco, top;

void input() {
	cout << "enter highest marks possible" << endl;
	cin >> top;
	cout << "enter math marks" << endl;
	cin >> math;
	cout << "enter english marks" << endl;
	cin >> english;
	cout << "enter physics marks" << endl;
	cin >> physics;
	cout << "enter history marks" << endl;
	cin >> history;
	cout << "enter eco marks" << endl;
	cin >> eco;
}

int main() {
	input();

	int total = math + english + history + eco + physics;

	int percentage = ((total / 5) * 100) / top;
	std::cout << "total marks = " << total << "\n" << "percentage = " << percentage << "%";
}

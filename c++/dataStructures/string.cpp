#include <array>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
	int num = 123123;

	char ch = 'a';
	string str = "Hello World";
	vector<char> vec = {'H', 'e', 'l', 'l', 'o', 'W', 'o', 'r', 'l', 'd'};
	array<char, 11> arr = {'H', 'e', 'l', 'l', 'o', 'W', 'o', 'r', 'l', 'd'};

	cout << str << endl;
	cout << str.size() << endl;

	return 0;
}

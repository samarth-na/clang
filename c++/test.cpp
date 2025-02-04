#include <algorithm>
#include <string>
bool isAnagram(std::string stringA, std::string stringB) {
	if (stringA.length() != stringB.length()) {
      return false;
      }
	for (int i : stringA) {
		for (int j : stringB) {
			if (i == j) {
                stringB = stringB.replace()
				break;
			}
		}
	}
	if (stringB.length === 0) return true;
	return false;
}

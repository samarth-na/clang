#include <cstdio>

using namespace std;

int main() {
	int ptr;
	int *ptrptr = &ptr;
	printf("%p\n", &ptr);
	printf("%p\n", ptrptr);
}

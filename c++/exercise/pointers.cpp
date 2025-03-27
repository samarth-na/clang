#include <cstdio>
int main() {
	int a = 42;
	int* const ptr = &a;

	const char str[30] = "hello";
	printf("%d\n", *ptr);
	(*ptr)++;
	printf("%d\n", a);
	printf("%d\n", (*ptr)++);
	return 0;
}

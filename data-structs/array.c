#include <stdio.h>

void display(int[5] list) {
	for (int i; i < 5; i++) {
		printf("%d", list[i])
	}
}

int arrpoint() {
	int x[4];
	int i;

	for (i = 0; i < 4; ++i) {
		printf("&x[%d] = %p\n", i, &x[i]);
	}

	printf("Address of array x: %p", x);

	return 0;
}

int main() {
	int a[] = {1, 2, 3, 4};
	int non;
	printf("%d  ,e of non \n", non);
	for (int i = 0; i <= 4; i++) {
		printf("%d = %d \n huftf \n", non, a[i]);
	}
}

#include <stdio.h>
#include <stdlib.h>

int main() {

    int x = 42;
    int *ptr = &x;
    int neww = *ptr;

    printf("%d %p\n", x, &x);
    printf("%d %p\n", *ptr, ptr);
    printf("%d\n", neww);

    int array[] = {1, 2, 3, 4, 5};

    printf("%p\n", &array);
    printf("%p\n", &array[0]);
    printf("%p\n", &array[1]);
    printf("%p\n", &array[2]);
    printf("%p\n", &array[3]);

    int p = 8;
    int *pp = &p;
    int **dp = &pp;
    printf("%d\n", **dp);
    printf("%d\n", *pp);
    printf("%d\n %p\n", p, &p);
};
int takepointer(int **a) {
    int *b = *a;
    return EXIT_SUCCESS;
};
#include <stdio.h>
void swap(int *n1, int *n2);

int pointerswap() {
    int num1 = 5, num2 = 10;

    swap(&num1, &num2);

    printf("num1 = %d\n", num1);
    printf("num2 = %d", num2);
    return 0;
}

void swap(int *n1, int *n2) {
    int temp;
    temp = *n1;
    *n1 = *n2;
    *n2 = temp;
}

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
    printf("%d\n", p);
};
int takepointer(int **a) {
    int *b = *a;
    return EXIT_SUCCESS;
};

#include <stdio.h>

int main() {

    int x = 42;
    int *ptr = &x;
    int neww = *ptr;

    printf("%d\n", x);
    printf("%p\n", &x);
    printf("%p\n", ptr);
    printf("%p\n", &ptr);
    printf("%d\n", *ptr);
    printf("%d\n", neww);

    int array[] = {1, 2, 3, 4, 5};

    printf("%p\n", &array);
    printf("%p\n", &array[0]);
    printf("%p\n", &array[1]);
    printf("%p\n", &array[2]);
    printf("%p\n", &array[3]);

    int p = {8};
    int *pp = &p;
    int **dp = &pp;
    printf("%d\n", **dp);
    printf("%d\n", *pp);
    printf("%d\n", p);
}

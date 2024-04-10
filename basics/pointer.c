#include <stdio.h>

int main() {

    int x = 42;
    int *ptr = &x;

    printf("%d\n", x);
    printf("%p\n", &x);
    printf("%p\n", ptr);
    printf("%d\n", *ptr);

    int array[] = {1, 2, 3, 4, 5};

    printf("%p\n", &array);
    printf("%p\n", &array[0]);
    printf("%p\n", &array[1]);
    printf("%p\n", &array[2]);
    printf("%p\n", &array[3]);

    struct structure {
        int number;
        char charater;
    } struct1;
    printf("%p\n", &struct1.number);
    printf("%p\n", &struct1);
}

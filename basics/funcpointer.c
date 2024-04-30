#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {

    int a, b;
    a = 1;
    b = 2;
    int c = a + b;
    printf("%d, %p\n", c, &c);

    return EXIT_SUCCESS;
}

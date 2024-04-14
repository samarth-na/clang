#include <stdio.h>
#include <stdlib.h>
int *add(int *a, int *b) {

    int l = *a + *b;
    return 0;
}
int main(int argc, char *argv[]) {

    int a, b;
    a = 1;
    b = 2;
    int *as = &a;
    int *bs = &b;
    int c = *as + *bs;
    printf("%d, %p\n", c, &c);
    return EXIT_SUCCESS;
}

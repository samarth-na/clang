#include <stdio.h>
#include <stdlib.h>

int main() {

    int *ptr = (int *)malloc(sizeof(int));

    long size = sizeof(int);

    printf("%ld\n", size);
    printf("%d , %p\n", *ptr, ptr);

    // Free the allocated memory
    //
    //

    return 0;
}

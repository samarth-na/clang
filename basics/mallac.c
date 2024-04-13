#include <stdio.h>
#include <stdlib.h>

int main() {

    // Allocate memory for an integer
    int *ptr = (int *)malloc(sizeof(int));
    int *pt;
    printf("%d\n", *ptr);

    // Check if the memory allocation was successful

    // Use the allocated memory
    *ptr = 42;
    printf("Value stored in the allocated memory: %d\n", *ptr);

    // Free the allocated memory
    free(ptr);

    return 0;
}

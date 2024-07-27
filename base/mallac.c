#include <stdio.h>
#include <stdlib.h>

int main() {
    qsort(NULL, 0, sizeof(int), NULL);

    int *ptr1 = (int *)malloc(sizeof(int));

    long size = sizeof(int);

    printf("%ld\n", size);
    printf("%d , %p\n", *ptr1, ptr1);

    int n, i, *ptr, sum = 0;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    ptr = (int *)malloc(n * sizeof(int));

    // if memory cannot be allocated
    if (ptr == NULL) {
        printf("Error! memory not allocated.");
        exit(0);
    }

    printf("Enter elements: ");
    for (i = 0; i < n; i++) {
        scanf("%d", ptr + i);
        sum += *(ptr + i);
    }

    printf("Sum = %d", sum);

    // deallocating the memory
    free(ptr);

    return 0;
}

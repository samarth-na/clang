#include <stdio.h>

int add(int a, int b);

int main() {
    int ai, bo;
    {
        scanf("%i", &ai);
        scanf("%i", &bo);
    }
    int result = add(ai, bo);

    printf("Result: %d\n", result);
}

int add(int a, int b) { return a + b; }

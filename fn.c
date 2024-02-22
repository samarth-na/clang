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

    int x, y;
    {
        x = 9;
        y = 10;
    }

    while (x > 0) {
        printf("%i\n", x);
        x--;
    }
}

int add(int a, int b) {
    ;
    return a + b;
}

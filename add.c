#include <stdio.h>
int add(int a, int b);
int a, b, c;
int main() {
    printf("first no. ");
    scanf("%i", &a);
    printf("second no. ");
    scanf("%i", &b);
    c = a + b;
    printf("%i", c);
    return 0;
}

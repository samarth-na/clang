#include <stdio.h>

int Pointer(int a) {
    int *p = &a;
    printf("%d", *p);
    return 0;
}
int main() {
    int a = 10;
    Pointer(a);
}

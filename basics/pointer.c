#include <stdio.h>

int pointer(int a) {
    int *p = &a;
    printf("%d", *p);
    return 0;
}
int main() {
    int a = 10;
    pointer(a);
}

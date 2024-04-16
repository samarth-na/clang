#include <stdio.h>
int main() {
    int p;
    printf("enter no. ");
    scanf("%d", &p);
    for (int i = 1; i <= 10; i++) {
        int ans = i * p;
        printf("%d\n ", ans);
    }
}

#include <stdio.h>

int main() {
    int mainarr[] = {1, 2, 3, 4, 5};
    for (int i = 0; i < sizeof(mainarr) / sizeof(mainarr[0]); i++) {
        int value = mainarr[i];
        for (int j = 0; j < value; j++) {
            printf("x");
        }
        printf("\n");
    }
    return 0;
}

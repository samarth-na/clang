#include <stdio.h>

int main() {
    int mainarr[] = {1, 2, 3, 4, 5};
    int arrSize = sizeof(mainarr) / sizeof(mainarr[0]);

    for (int i = 0; i < arrSize; i++) {
        int value = mainarr[i];
        for (int j = 0; j < value; j++) {
            printf("x");
        }
        printf("\n");
    }
    return 0;
}

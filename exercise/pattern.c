#include <stdio.h>

int mainarr[] = {1, 2, 3, 4, 5};

int length = sizeof(mainarr) / sizeof(mainarr[0]);

int printx(int n) {
    int temp = 0;
    if (n == temp) {
        return 0;
    } else {
        printf("x");
        return printx(n - 1);
    }
}
int reccur(int arr[5]) {
    int current = arr[0];

    printx(current);
    if (current >= length) {
        return 0;
    }

    printf("\n");
    return reccur(arr + 1);
}
int main() {
    // for (int i = 0; i < length; i++) {
    //     int value = mainarr[i];
    //     for (int j = 0; j < value; j++) {
    //         printf("x");
    //     }
    //     printf("\n");
    // }

    reccur(mainarr);
    return 0;
}
// make an recursive function that has sane output as the function above does

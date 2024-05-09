#include <stdio.h>

int main() {
    int a[] = {1, 2, 3, 4};
    int non;
    printf("%d  ,e of non \n", non);
    for (int i = 0; i <= 4; i++) {
        printf("%d = %d \n huftf \n", non, a[i]);
    }
}

void display(int age1, int age2) {
    printf("%d\n", age1);
    printf("%d\n", age2);
}

int ageArray() {
    int ageArray[] = {2, 8, 4, 12};

    // pass second and third elements to display()
    display(ageArray[1], ageArray[2]);
    return 0;
}

int arrpoint() {
    int x[4];
    int i;

    for (i = 0; i < 4; ++i) {
        printf("&x[%d] = %p\n", i, &x[i]);
    }

    printf("Address of array x: %p", x);

    return 0;
}

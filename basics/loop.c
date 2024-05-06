#include <stdio.h>
int main() {
    int inc = 0;

    // loop needs three things start, end and increment valus
    // then you add the action,where you place these for things
    // is what define the types of loop

    // while
    while (inc < 10) {
        printf("while\n");
        inc++;
    }
    printf("\n");

    // for
    for (inc = 0; inc < 10; inc++) {
        printf("forr\n");
    }
    printf("\n");

    // do while
    do {
        printf("do while\n");
    } while (inc < 10);
    printf("\n");

    // break to break an loop from inside of the action
    for (inc = 0; inc < 10; inc++) {
        if (inc > 5) {
            printf("break\n");
            break;
        }
        printf("%i\n", inc);
    }
    while (1) {
        printf("break\n");
        break;
    }
    return 0;
}

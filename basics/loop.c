#include <stdio.h>
int main() {
    int i = 0;

    // loop needs three things start, end and increment valus and then you add
    // the action you want to do where you place these three things is what
    // define the types of loop

    // while
    while (i < 10) {
        printf("while\n");
        i++;
    }
    printf("\n");

    // for
    for (i = 0; i < 10; i++) {
        printf("forr\n");
    }
    printf("\n");

    // do while
    do {
        printf("do while\n");
    } while (i < 10);
    printf("\n");

    // break to break an loop from inside of the action
    for (i = 0; i < 10; i++) {
        if (i > 5) {
            printf("break\n");
            break;
        }
        printf("%i\n", i);
    }
    while (1) {
        printf("break\n");
        break;
    }
    return 0;
}

#include <stdio.h>
#include <stdlib.h>

#define MAX_INPUT 3
// Program to calculate the sum and average of positive numbers
// If the user enters a negative number, the sum and average are displayed.
int gotoMeth() {

    int i;
    double number, average, sum = 0.0;

    for (i = 1; i <= MAX_INPUT; ++i) {
        printf("%d. Enter a number: ", i);
        scanf("%lf", &number);
        // go to jump if the user enters a negative number
        if (number < 0.0) {
            goto jump;
        }
        sum += number;
    }

jump:
    printf("hellllllll yawwww");
    average = sum / (i - 1);
    printf("Sum = %.2f\n", sum);
    printf("Average = %.2f\n", average);

    return 0;
}

int main() {

    int choose = rand() % 3 + 1;
    choose = 1;

    gotoMeth();
    goto end;
what:
    printf("what\n");
start:
    printf("welcome\n");
end:
    printf("bye\n");
}

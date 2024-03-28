#include <stdbool.h> // Include for bool type
#include <stdio.h>

int input;
char con;
bool istrue = true; // Initialize istrue to true
int sqa;
int main() {
    printf("s");
    // make an loop

    while (istrue) {
        printf("enter an number = ");
        scanf("%d", &input);

        int square = input * input;
        printf("\nsquare is %d \n", square);

        printf(
            "do you want to continue \nfor yes enter y\nfor no enter n \n= ");
        scanf(" %c", &con); // Added space before %c to skip whitespace

        if (con == 'n') {
            istrue = false;
        };
    }
}

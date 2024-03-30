#include <stdbool.h> // Include for bool type
#include <stdio.h>

int input;
char con;
bool istrue = true; // Initialize istrue to true
int sqa;
int main() {
    // make an loop

    while (istrue) {
        printf(" enter an number = ");
        scanf("%d", &input);

        int square = input * input;
        printf("\n square is %d \n", square);

        printf(" do you want to continue"
               "\n for yes enter [y]"
               "\n for no enter  [n]"
               "\n"
               "\n =");
        scanf(" %c", &con); // Added space before %c to skip whitespace

        if (con == 'n') {
            istrue = false;
        };
    }
}

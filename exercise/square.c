#include <stdbool.h> // Include for bool type
#include <stdio.h>

int intInput;
char charInput;
bool istrue = true; // Initialize istrue to true

int square(int input) { return input * input; };

bool again(char con) {
    if (con == 'y') {
        return true;
    };
    return false;
};

int main() {
    // make an loop

    while (istrue) {
        printf(" enter an number = ");
        scanf("%d", &intInput);

        printf("\n square is %d \n", square(intInput));

        printf(" do you want to continue"
               "\n for yes enter [y]"
               "\n type anther key to exit [n]"
               "\n"
               "\n =");
        scanf(" %c", &charInput);

        istrue = again(charInput);
    }
}

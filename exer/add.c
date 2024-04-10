#include <stdbool.h>
#include <stdio.h>

int add(int a, int b);
int a, b, c;
bool istrue = true;
char input;

int main() {
    while (true) {

        printf("first no. ");
        scanf("%d", &a);

        printf("second no. ");
        scanf("%d", &b);

        c = a + b;

        printf("%d", c);

        printf(" do you want to continue"
               "\n for yes enter [y]"
               "\n for no enter  [n]"
               "\n"
               "\n =");
        scanf(" %c", &input); // Added space before %c to skip whitespace);
        if (input == 'n') {
            istrue = false;
        }
    }
    return 0;
}

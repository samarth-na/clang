#include <stdio.h>

typedef struct {
    int inte;
    char stre;
} letdef;

int main() {

    printf("lets work with typedef \n");

    int var;
    var = 3;
    letdef lest;
    lest.stre = 'e';
    printf("%c , %d", lest.stre, lest.inte);
}

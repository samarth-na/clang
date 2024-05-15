#include <stdio.h>
#include <stdlib.h>

int main() {

    typedef struct {
        int inte;
        char stre;
    } something;

    int var = 3;
    something lest;

    lest.stre = 'e';
    lest.inte = var;

    printf("%c , %d", lest.stre, lest.inte);
    void *ptr = malloc(sizeof(lest));
    // void pointers have no limit or size like in int pointer you can only set
    // value to an int but with void you can set it to anything you want

    printf("%c , %d", ((something *)ptr)->stre, ((something *)ptr)->inte);
}

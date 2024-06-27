#include <stdlib.h>

// Union to store different data types
union Data {
    int integer;
    float floating;
    char string[20];
};

// Linked list node structure
typedef struct Node {

    union {
        int integer;
        float floating;
        char string[20];
    } *data;
    struct Node *next;
} Node;

int main(int argc, char *argv[]) {

    double in;
    in = 123.4123;
    Node head;
    head.data->integer = 1;
    return EXIT_SUCCESS;
}

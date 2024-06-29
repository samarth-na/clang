#include <stdio.h>
#include <stdlib.h>

typedef union Data {
    int integer;
    float floating;
    char string[20];
} Data;

// Linked list node structure
typedef struct Node {
    Data *data;
    struct Node *next;
} Node;

int main(int argc, char *argv[]) {
    // Create a new node and allocate memory for it
    Node *head = (Node *)malloc(sizeof(Node));
    if (head == NULL) {
        printf("Memory allocation failed\n");
        return EXIT_FAILURE;
    }

    // Allocate memory for the data
    head->data = (Data *)malloc(sizeof(Data));
    if (head->data == NULL) {
        printf("Memory allocation failed\n");
        free(head);
        return EXIT_FAILURE;
    }

    // Initialize the data
    head->data->integer = 42;
    head->next = NULL;

    // Now we can safely access the data
    printf("%d\n", head->data->integer);

    // Free the allocated memory
    free(head->data);
    free(head);

    return EXIT_SUCCESS;
}

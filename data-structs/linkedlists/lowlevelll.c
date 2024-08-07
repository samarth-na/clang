#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int data;
    void *next;
} node;

node *head = NULL;

node addnode(int data) {
    node *new = NULL;

    if (head == NULL) {
        node *new = malloc(sizeof(node));
        if (new == NULL) {
            return NULL;
        }
        node *head = NULL;
        new->next = NULL;
        new->data = data;
    } else {
    }

    // node *current = *head;
    // while (current->next != NULL) {
    // }
}

void menu() {
    printf("Menu:\nthe options you have are:\n");
    printf("1. Insert\n");
    printf("2. Delete\n");
    printf("3. Search\n");
    printf("4. quit\n");
}

int main(int argc, char *argv[]) {
    printf("hello world\n");
    return EXIT_SUCCESS;
}

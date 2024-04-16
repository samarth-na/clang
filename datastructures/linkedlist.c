#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>

//------------------------------------------------------------------------

typedef struct node {
    int value;
    struct node *next;
} node;

//------------------------------------------------------------------------

void insertAtBeginnin(node **root, int value) {

    node *newnode = (node *)malloc(sizeof(node));
    newnode->value = value;
    newnode->next = *root;
    *root = newnode;
}
//------------------------------------------------------------------------

void insertAtEnd(node **root, int value) {

    node *newnode = (node *)malloc(sizeof(node));
    if (newnode == NULL) {
        exit(1);
    }

    newnode->next = NULL;
    newnode->value = value;

    if (*root == NULL) {
        *root = newnode;
        return;
    }

    node *current = *root;
    while (current->next != NULL) {
        current = current->next;
    }

    current->next = newnode;
}

//------------------------------------------------------------------------

void dealocate(node **root) {
    node *current = *root;
    while (current->next != NULL) {
        node *auxilary = current;
        current = current->next;

        free(auxilary);
    }
    *root = NULL;
}

//------------------------------------------------------------------------

void program() {
    printf("\n▎linked list progam"
           "\n▎actions you can do "
           "\n▎add an element [a]"
           "\n▎remove an element [d]"
           "\n▎print the list [p]"
           "\n▎QUIT the programc [q]"
           "\n▎");
    ;
}

//------------------------------------------------------------------------

void printlist(node *root) {
    printf("\n");

    for (node *current = root; current != NULL; current = current->next) {
        printf("(%d) -> ", current->value);
    }
    printf("NULL\n");
}

//------------------------------------------------------------------------

int main() {
    node *root = (node *)malloc(sizeof(node));
    int *asd = (int *)malloc(sizeof(int));

    if (root == NULL) {
        exit(1);
    }
    // node *root = NULL;

    insertAtEnd(&root, 1);
    insertAtEnd(&root, 2);
    insertAtEnd(&root, 3);
    printlist(root);
    insertAtBeginnin(&root, 4);
    printlist(root);
}

//------------------------------------------------------------------------

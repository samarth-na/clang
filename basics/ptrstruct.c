#include <stdio.h>
#include <stdlib.h>

//-------------------------------------------------------------------------------------

typedef struct node {
    int value;
    struct node *next;
} node;

//-------------------------------------------------------------------------------------

void printlist(node *root) {
    for (node *current = root; current != NULL; current = current->next) {
        printf("(%d) -> ", current->value);
    }
    printf("NULL\n");
}

//-------------------------------------------------------------------------------------

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
    {
        node *current = *root;
        while (current->next != NULL) {
            current = current->next;
        }

        current->next = newnode;
    }
}

//-------------------------------------------------------------------------------------

int main() {
    node *root = (node *)malloc(sizeof(node));
    if (root == NULL) {
        exit(1);
    }
    // node *root = NULL;

    insertAtEnd(&root, 9);
    insertAtEnd(&root, 5);
    insertAtEnd(&root, 3);

    printlist(root);
    insertAtEnd(&root, 1);
    printlist(root);
}

//-------------------------------------------------------------------------------------

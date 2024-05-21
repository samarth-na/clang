#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>

typedef struct node {
    int value;
    struct node *next;
} node;

void insertAtBeginnin(node **root, int value) {
    node *newnode = (node *)malloc(sizeof(node));
    newnode->value = value;
    newnode->next = *root;
    *root = newnode;
}

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

void dealocate(node **root) {
    node *current = *root;
    while (current->next != NULL) {
        node *auxilary = current;
        current = current->next;

        free(auxilary);
    }
    *root = NULL;
}

void printlist(node *root) {
    printf("\n");

    for (node *current = root; current != NULL; current = current->next) {
        printf("(%d) -> ", current->value);
    }
    printf("NULL\n");
}

void interface(node **root) {
    printf("\nlinked list progam"
           "\nactions you can do "
           "\nadd an element [a]"
           "\nremove an element [d]"
           "\nprint the list [p]"
           "\nQUIT the programc [q]"
           "\n");
    char choice;
    while (1) {
        printf(
            "\n▎Enter your choice (a-add, d-delete, p-print, q-QUIT ,c-clear "
            ") : ");
        scanf(" %c", &choice);

        switch (choice) { // Handle the user's choice

            int value;
        case 'i':
            printf("Enter the number you want to insert : ");
            scanf("%d", &value);
            insertAtBeginnin(root, value);
            break;
        case 'e':
            printf("Enter the number you want to insert : ");
            scanf("%d", &value);
            insertAtEnd(root, value);
            break;
        case 'd':
            break;
        case 'p':
            printlist(*root);
            break;
        case 'q':
            printf("EXITED \n");
            return;
        case 'c':
            system("clear");
            break;
        default:
            printf("Invalid choice. Please try again.\n");
            break;
        }
    }
}

int main() {
    node *root = (node *)malloc(sizeof(node));

    if (root == NULL) {
        exit(1);
    }
    // node *root = NULL;
    insertAtBeginnin(&root, 9);
    insertAtBeginnin(&root, 9);
    insertAtBeginnin(&root, 9);
    insertAtBeginnin(&root, 9);
    printlist(root);
}

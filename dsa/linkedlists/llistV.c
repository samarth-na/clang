#include <stdio.h>
#include <stdlib.h>

typedef struct node {
    int value;
    struct node *next;
} node;

void insertAtBeginnin(node **root, int value) {
    node *newnode = (node *)malloc(sizeof(node));

    newnode->value = value;
    newnode->next = NULL;
    if (*root == NULL) {
        *root = newnode;
        return;

    } else {
        newnode->next = *root;
        *root = newnode;
    }
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

    int index = 1;
    for (node *current = root; current != NULL; current = current->next) {

        printf("%d(%d) -> ", index, current->value);
        index++;
    }
    printf("NULL\n");
}

void interface(node **root) {

    printf("\nlinked list progam\n"
           "actions you can do "
           "add an element in start[a]\n"
           "add an element in end[e]\n"
           "add an element in middle[m]\n"
           "remove the list [d]\n"
           "print the list [p]\n"
           "QUIT the programc [q]\n"
           "");
    char choice;
    while (1) {
        printf("\n▎Enter your choice (a,m,e-add, d-delete, p-print, q-QUIT "
               ",c-clear "
               ") : ");
        fflush(stdin);
        scanf(" %c", &choice);

        switch (choice) { // Handle the user's choice

            int value;
        case 'a':
            printf("Enter the number you want to insert : ");
            scanf("%d", &value);
            insertAtBeginnin(root, value);
            break;
        case 'e':
            printf("Enter the number you want to insert : ");
            scanf("%d", &value);
            insertAtEnd(root, value);
            break;
        case 'm':
            printf("Enter the number you want to insert : ");
            scanf("%d", &value);
        case 'd':
            dealocate(root);
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
    node *root = NULL;

    insertAtBeginnin(&root, 1);
    insertAtBeginnin(&root, 9);
    insertAtBeginnin(&root, 3);
    insertAtBeginnin(&root, 2);

    printlist(root);
    interface(&root);

    // node *root = NULL;
}

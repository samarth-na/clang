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

void insertAtmiddle(node **root, int value) {
    node *newnode = (node *)malloc(sizeof(node));
    printf("\n");
    int index = 1;
    for (node *current = *root; current != NULL; current = current->next) {
        printf("%d(%d) -> ", index, current->value);
        index++;
    }
    printf("NULL\n");
    printf("after where do you want to insert the new number");

    scanf("%d", &index);

    node *beforenew = (node *)malloc(sizeof(node));
    node *afternew = (node *)malloc(sizeof(node));

    for (int ittr; ittr <= index; index++) {
        afternew = afternew->next;
    }
    beforenew = afternew->next;

    newnode->value = value;

    beforenew->next = newnode;
    newnode->next = afternew;
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
    printf("\nlinked list progam"
           "\nactions you can do "
           "\nadd an element in start[a]"
           "\nadd an element in end[e]"
           "\nadd an element in middle[m]"
           "\nremove the list [d]"
           "\nprint the list [p]"
           "\nQUIT the programc [q]"
           "\n");
    char choice;
    while (1) {
        printf("\n▎Enter your choice (a,m,e-add, d-delete, p-print, q-QUIT "
               ",c-clear "
               ") : ");
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
            insertAtmiddle(root, value);
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

    // node *root = NULL;
    interface(&root);
}

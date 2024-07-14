#include <stdio.h>
#include <stdlib.h>

typedef struct node {
    int value;
    struct node *next;
} node;

node *createNode(int value) {
    node *newNode = (node *)malloc(sizeof(node));
    if (newNode == NULL) {
        fprintf(stderr, "Memory allocation failed\n");
        exit(1);
    }
    newNode->value = value;
    newNode->next = NULL;
    return newNode;
}

void insertAtBeginning(node **root, int value) {
    node *newNode = createNode(value);
    newNode->next = *root;
    *root = newNode;
}

void insertAtEnd(node **root, int value) {
    node *newNode = createNode(value);

    if (*root == NULL) {
        *root = newNode;
        return;
    }

    node *current = *root;
    while (current->next != NULL) {
        current = current->next;
    }
    current->next = newNode;
}

void insertAtPosition(node **root, int value, int position) {
    if (position <= 0) {
        insertAtBeginning(root, value);
        return;
    }

    node *newNode = createNode(value);
    node *current = *root;
    int currentPosition = 0;

    while (current != NULL && currentPosition < position - 1) {
        current = current->next;
        currentPosition++;
    }

    if (current == NULL) {
        insertAtEnd(root, value);
    } else {
        newNode->next = current->next;
        current->next = newNode;
    }
}

void deallocate(node **root) {
    node *current = *root;
    while (current != NULL) {
        node *temp = current;
        current = current->next;
        free(temp);
    }
    *root = NULL;
}

void printList(node *root) {
    printf("\n");
    int index = 1;
    for (node *current = root; current != NULL; current = current->next) {
        printf("%d(%d) -> ", index++, current->value);
    }
    printf("NULL\n");
}

void clearInputBuffer() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF)
        ;
}

void printMenu() {
    printf("\nLinked List Program\n"
           "Actions you can do:\n"
           "a - Add an element at the beginning\n"
           "e - Add an element at the end\n"
           "m - Add an element in the middle\n"

           "d - Delete the entire list\n"

           "p - Print the list\n"

           "q - Quit the program\n"

           "c - Clear the screen\n");
}

void handleUserInput(node **root) {
    char choice;
    int value, position;

    while (1) {

        printf("\n▎Enter your choice "
               "(a,m,e-add, d-delete, p-print, q-QUIT, c-clear) : ");
        scanf(" %c", &choice);
        clearInputBuffer();

        switch (choice) {
        case 'a':
        case 'e':
        case 'm':
            printf("Enter the number you want to insert: ");
            if (scanf("%d", &value) != 1) {
                printf("Invalid input. Please enter a number.\n");
                clearInputBuffer();
                break;
            }
            clearInputBuffer();

            if (choice == 'a') {
                insertAtBeginning(root, value);
            } else if (choice == 'e') {
                insertAtEnd(root, value);
            } else {
                printf("Enter the position: ");
                if (scanf("%d", &position) != 1) {
                    printf("Invalid input. Please enter a number.\n");
                    clearInputBuffer();
                    break;
                }
                clearInputBuffer();
                insertAtPosition(root, value, position);
            }
            break;
        case 'd':
            deallocate(root);
            printf("List deleted.\n");
            break;
        case 'p':
            printList(*root);
            break;
        case 'q':
            printf("Exiting program.\n");
            return;
        case 'c':
#ifdef _WIN32
            system("cls");
#else
            system("clear");
#endif
            break;
        default:
            printf("Invalid choice. Please try again.\n");
            break;
        }
    }
}

int main() {
    node *root = NULL;

    printMenu();
    handleUserInput(&root);

    deallocate(&root);
    return 0;
}

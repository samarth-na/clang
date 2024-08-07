#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    struct Node *next;
    int data;
} Node;

Node *head = NULL;

// add a node to the list
Node *addNode(int data) {
    Node *newnode = (Node *)malloc(sizeof(Node));
    if (newnode == NULL)
        return NULL;

    newnode->data = data;
    newnode->next = head;
    head = newnode;
    return newnode;
}

// remove a node from the list
int removeNode(int data) {
    Node *current = head;
    Node *prev = NULL;
    while (current != NULL) {
        if (current->data == data) {
            if (prev == NULL) {
                head = current->next;
            } else {
                prev->next = current->next;
            }
            free(current);
            return 1;
        }
        prev = current;
        current = current->next;
    }
    return 0;
}

// insert a node into a position in the list
Node *insertNode(int data, int position) {
    if (position < 0) {
        printf("Invalid position\n");
        return NULL;
    }

    if (position == 0 || head == NULL) {
        return addNode(data);
    }

    Node *current = head;
    int currentPos = 0;
    while (current != NULL && currentPos < position - 1) {
        current = current->next;
        currentPos++;
    }

    if (current == NULL) {
        printf("Requested position too far into list\n");
        return NULL;
    }

    Node *newnode = (Node *)malloc(sizeof(Node));
    if (newnode == NULL)
        return NULL;
    newnode->data = data;
    newnode->next = current->next;
    current->next = newnode;
    return newnode;
}

// print operation
void printList() {
    Node *current = head;
    while (current != NULL) {
        printf("%d->", current->data);
        current = current->next;
    }
    printf("NULL\n");
}

void printMenu() {
    printf("You have the following options:\n");
    printf("\t1. Add a node to the list.\n");
    printf("\t2. Remove a node from the list.\n");
    printf("\t3. Insert a node to the list.\n");
    printf("\t4. Print your list\n");
    printf("\t5. Quit.\n");
}

int main(int argc, char **argv) {
    int option = -1;
    int arg1 = 0;
    int arg2 = 0;
    while (option != 5) {
        printMenu();
        printf("Enter your choice: ");
        if (scanf("%d", &option) != 1) {
            printf("Invalid input. Please enter a number.\n");
            while (getchar() != '\n')
                ; // Clear input buffer
            continue;
        }

        if (option > 0 && option <= 5) {
            switch (option) {
            case 1:
                printf("What data should I insert?: ");
                if (scanf("%d", &arg1) == 1) {
                    Node *newnode = addNode(arg1);
                    if (newnode == NULL)
                        printf("Failed to add node\n");
                    else
                        printf("Node added successfully\n");
                } else
                    printf("Invalid input\n");
                break;
            case 2:
                printf("What data should I remove?: ");
                if (scanf("%d", &arg1) == 1) {
                    int success = removeNode(arg1);
                    if (!success)
                        printf("Element not found\n");
                    else
                        printf("Node removed successfully\n");
                } else
                    printf("Invalid input\n");
                break;
            case 3:
                printf("What data should I insert?: ");
                if (scanf("%d", &arg1) == 1)

                {
                    printf("What position?: ");
                    if (scanf("%d", &arg2) == 1) {
                        Node *newnode = insertNode(arg1, arg2);
                        if (newnode == NULL)
                            printf("Failed to insert into list\n");
                        else
                            printf("Node inserted successfully\n");
                    } else
                        printf("Invalid position input\n");
                } else
                    printf("Invalid data input\n");
                break;
            case 4:
                printList();
                break;
            case 5:
                printf("Exiting program\n");
                break;
            }
        } else {
            printf("Invalid option. Please choose a number between 1 and 5.\n");
        }

        while (getchar() != '\n')
            ; // Clear input buffer
    }

    // Free all allocated memory before exiting
    //
    while (head != NULL) {
        Node *temp = head;
        head = head->next;
        free(temp);
    }

    return 0;
}

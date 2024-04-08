#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int Value;
    struct Node *Next;
} Node;

typedef struct LinkedList {
    Node *Head;
    Node *Tail;
    int Size;
} LinkedList;

// Function to create a new node
Node *createNode(int value) {
    Node *newNode = (Node *)malloc(sizeof(Node));
    newNode->Value = value;
    newNode->Next = NULL;
    return newNode;
}

// Function to append a new node to the end of the list
void append(LinkedList *list, int value) {
    Node *newNode = createNode(value);

    if (list->Head == NULL) {
        list->Head = list->Tail = newNode;
    } else {
        list->Tail->Next = newNode;
        list->Tail = newNode;
    }

    list->Size++;
}

int main() {
    LinkedList list = {NULL, NULL, 0};

    append(&list, 1);
    append(&list, 2);
    append(&list, 3);

    // Traverse the list and print the values
    Node *current = list.Head;
    while (current != NULL) {
        printf("%d -> ", current->Value);
        current = current->Next;
    }
    printf("NULL\n");

    printf("Size of the list: %d\n", list.Size);

    return 0;
}

#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int data; // You can change this to any data type you need
    struct Node *next;
} Node;

void push(Node **head_ref, int new_data) {
    Node *new_node = (Node *)malloc(sizeof(Node));
    new_node->data = new_data;
    new_node->next = (*head_ref);
    (*head_ref) = new_node;
}

int main() { Node *head = NULL; }
void printentirelist(Node *n) {
    while (n != NULL) {
        printf("%d ", n->data);
        n = n->next;
    }
}
struct Node *insertAtBeginning(struct Node *head, int data) {
    struct Node *newNode = createNode(data);
    newNode->next = head;
    return newNode;
}

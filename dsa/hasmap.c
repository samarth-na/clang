#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define HASH_SIZE 100

typedef struct Node {

    char key[256];
    int value;
    struct Node *next;
} Node;

Node *hashMap[HASH_SIZE];

typedef uint uint;

uint hash(char *key) {
    uint hashVal = 0;
    for (int i = 0; key[i] != '\0'; i++) {
        hashVal = key[i] + (hashVal << 6) + (hashVal << 16) - hashVal;
    }
    return hashVal % HASH_SIZE;
}

void insert(char *key, int value) {
    uint hashVal = hash(key);
    Node *newNode = (Node *)malloc(sizeof(Node));
    strcpy(newNode->key, key);
    newNode->value = value;
    newNode->next = NULL;

    if (hashMap[hashVal] == NULL) {
        hashMap[hashVal] = newNode;
    } else {
        Node *temp = hashMap[hashVal];
        while (temp->next != NULL) {
            temp = temp->next;
        }
        temp->next = newNode;
    }
}

int lookup(char *key) {
    uint hashVal = hash(key);
    Node *temp = hashMap[hashVal];
    while (temp != NULL) {
        if (strcmp(temp->key, key) == 0) {
            return temp->value;
        }
        temp = temp->next;
    }
    return -1;
}

int main() {
    insert("apple", 10);
    insert("banana", 20);
    insert("cherry", 30);

    printf("Value of 'apple':  %d\n", lookup("apple"));
    printf("Value of 'banana': %d\n", lookup("banana"));
    printf("Value of 'cherry': %d\n", lookup("cherry"));
    printf("Value of 'orange': %d\n", lookup("orange"));

    return 0;
}

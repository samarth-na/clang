#include <stdio.h>

struct node {
    int Value;
    struct Node *Next;
} node1;

int main() {

    node1.Value = 5;

    struct node two;

    {
        printf("%p\n", &node1.Next);
        printf("%p\n", &two);
    }

    struct structure {
        int number;
        int *next;
    } struct1;

    struct structure struct2;

    struct1.number = 10;
    struct1.next = &struct2.number;

    {
        printf("%d\n", struct1.number);
        printf("%p\n", &struct2.next);
    }
}

;

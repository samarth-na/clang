#include <stdio.h>

struct node {
    int Value;
    struct Node *Next;
} node;

int main() {

    node.Value = 5;

    struct node two;

    {
        printf("%p\n", &node.Next);
        printf("%p\n", &two);
    }

    struct structure {
        int number;
        struct structure *next;
    } struct1;

    struct structure struct2;

    struct1.number = 10;
    struct1.next = &struct2;

    {
        printf("%d\n", struct1.number);
        printf("%p\n", &struct2.next);
    }
}

;

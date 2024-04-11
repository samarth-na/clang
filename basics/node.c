#include <stdio.h>

typedef struct node {
    int index;
    int Value;
    struct node *Next;
} node;

typedef struct linkedlist {
    node START;
    node END;
    int length;
} linkedlist;

typedef enum { ADD = 'a', DELETE = 'd', PRINT = 'p', QUIT = 'q' } opts;
opts choice;

char input;
void addelement(){};
void deleteelement(){};
void printlist(){};
void quite(){};

int main() {
    linkedlist list;
    node START, END;
    list.length = 0;
    list.START = START;
    list.END = END;

    printf("linked list program\n");
    printf("things you can do with linked lists\n");
    printf("a - add a value to the list\n");
    printf("d - delete a value from the list\n");
    printf("p - print the list\n");
    printf("q - quit the program\n");
    scanf("%c", &input);
    while (input != 'q') {
        switch (input) {
        case 'a':
            printf("add a value to the list\n");
        case 'd':
            printf("delete a value from the list\n");
        case 'p':
            printf("print the list\n");
        case 'q':
            printf("quit the program\n");
        }
    }
}

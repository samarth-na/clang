#include <stdio.h>
#include <stdlib.h>

#define MAXSIZE 10

typedef int queue[MAXSIZE];

queue list;
int front = -1, rear = -1;

void enqueue() {
    int value;
    printf("▎type the number you want to add in the queue = ");
    scanf("%d", &value);

    if (rear >= MAXSIZE - 1) {
        printf("Queue is full");
        return;
    }
    if (front == -1) {
        front = rear = 0;
    } else {
        rear++;
    }
    list[rear] = value;
}
void dequeue() {

    if (rear == -1) {
        printf("Queue is empty");
        return;
    } else {
        list[rear] = 0;
        rear--;
    }
};
void print() {

    for (int index = 0; index <= rear; index++) {
        {
            printf("\n▎at index (%d) the value  %d", index, list[index]);
        }
        if (index == front) {
            printf(" <- front ");
        }
        if (index == rear) {
            printf(" <- rear ");
        }
    }

    printf("\n");
}
void menu() {
    char choice;

    system("clear");
    printf("▎queue Program\n");
    printf("▎Things you can do with linked queue:\n");
    printf("▎a - add a value to the queue\n");
    printf("▎d - delete a value from the queue\n");
    printf("▎p - print the queue\n");
    printf("▎q - quit the program\n");

    while (1) {

        printf("▎Enter your choice (a-add, d-delete, p-print, q-QUIT ,c-clear "
               "): ");

        scanf(" %c", &choice);

        switch (choice) {

        case 'a':
            printf("▎Add a value to the queue\n");
            enqueue();
            break;

        case 'd':
            printf("▎Delete a value from the queue\n");
            dequeue();
            break;

        case 'p':
            printf("▎Print the queue\n");
            print();
            break;

        case 'q':
            printf("▎Quit the program\n");

        case 'c':
            system("clear");
            break;

        default:
            printf("▎Invalid choice. Please try again.\n");
            break;
        }
    }
}

int main() {

    menu();

    return EXIT_SUCCESS;
}

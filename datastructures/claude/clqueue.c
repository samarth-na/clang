#include <stdio.h>

#define MAX_SIZE 100 // Maximum size of the queue

int queue[MAX_SIZE]; // Array to store the queue elements
int front = -1;      // Index of the front element
int rear = -1;       // Index of the rear element

// Function to check if the queue is empty
int isEmpty() { return (front == -1 && rear == -1); }

// Function to check if the queue is full
int isFull() { return (rear == MAX_SIZE - 1); }

// Function to enqueue an element
void enqueue(int value) {
    if (isFull()) {
        printf("Error: Queue is full.\n");
        return;
    }

    if (isEmpty()) {
        front = rear = 0;
    } else {
        rear++;
    }

    queue[rear] = value;
}

// Function to dequeue an element
int dequeue() {
    if (isEmpty()) {
        printf("Error: Queue is empty.\n");
        return -1;
    }

    int value = queue[front];

    if (front == rear) {
        front = rear = -1;
    } else {
        front++;
    }

    return value;
}

int main() {
    enqueue(10);
    enqueue(20);
    enqueue(30);

    printf("Dequeued element: %d\n", dequeue());
    printf("Dequeued element: %d\n", dequeue());

    enqueue(40);
    enqueue(50);

    while (!isEmpty()) {
        printf("Dequeued element: %d\n", dequeue());
    }

    return 0;
}

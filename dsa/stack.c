#include <stdio.h>
#include <stdlib.h>

// Define the maximum size of the stack
#define MAXSIZE 100
// Define the stack as an array of integers with the maximum size
typedef int stack[MAXSIZE];

// Declare the stack
stack list;
// Initialize the front and top pointers of the stack
int top = -1;
void push(int value) {
    if (top == MAXSIZE - 1) {
        printf("Stack Overflow (stack is full)\n");
        return;
    }
    top++;
    list[top] = value;
}

void pop() {
    if (top == -1) {
        printf("Stack Underflow (stack is empty)\n");
    }

    list[top] = 0;
    top--;
}

void print() {
    if (top == -1) {
        printf("Queue is empty\n");
    }

    // Iterate through the queue and print the elements
    for (int index = top; index >= 0; index--) {
        printf("\n at index (%d) the value {%d}", index, list[index]);

        // Indicate the front and top pointers
        if (index == top) {
            printf(" <- top ");
        }
    }
    printf("\n");
}

int main() {
    push(10);
    push(10);
    push(10);
    pop();
    print();
    return EXIT_SUCCESS;
}

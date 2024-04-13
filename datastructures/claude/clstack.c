#include <stdio.h>

#define MAX_SIZE 100

int stack[MAX_SIZE];
int top = -1;

void push(int value) {
    if (top == MAX_SIZE - 1) {
        printf("Stack Overflow\n");
        return;
    }
    stack[++top] = value;
}

int pop() {
    if (top == -1) {
        printf("Stack Underflow\n");
        return -1;
    }
    return stack[top--];
}

int main() {
    printf("");
    push(10);
    push(20);
    push(30);

    printf("Top element: %d\n", stack[top]); // Output: 30

    pop();

    if (top == -1) {
        printf("Stack is empty\n");
    } else {
        return 0;
    }
    return 0;
}

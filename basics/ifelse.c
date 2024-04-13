#include <stdio.h>
#define MAXSIZE 10
int main() {
    int rear, front;
    rear = 10;

    if (rear >= MAXSIZE - 1) {
        printf("Queue is full");
        return 0;
    }
    if (front == -1) {
        printf("something");
    } else {
        rear++;
        printf("else something");
    }
}

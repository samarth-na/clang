#include <stdio.h>
#include <stdlib.h>

//  Define the maximum size of the queue
#define MAXSIZE 100
// Define the queue as an array of integers with the maximum size
typedef int queue[MAXSIZE];

// Declare the queue
queue list;
// Initialize the front and rear pointers of the queue
int front = -1, rear = -1;

// Function to enqueue an element into the queue
void enqueue() {
    int value;
    // Prompt the user to enter the value to be added
    printf("type the number you want to add in the queue = ");
    scanf("%d", &value);

    // Check if the queue is full
    if (rear >= MAXSIZE - 1) {
        printf("Queue is full\n");
        return;
    }

    // If the queue is empty, set both front and rear to 0
    if (front == -1) {
        front = rear = 0;
    } else {
        // Increment the rear pointer to add the new element
        rear++;
    }

    // Add the value to the queue
    list[rear] = value;
}

// Function to dequeue an element from the queue
void dequeue() {
    // Check if the queue is empty
    if (rear == -1) {
        printf("Queue is empty\n");
        return;
    } else {
        // Set the dequeued element to 0 and decrement the rear pointer
        list[rear] = 0;
        rear--;
        printf("Deleted an item  \n");
    }
}

// Function to print the contents of the queue
void print() {
    if (rear == -1) {
        printf("Queue is empty\n");
    }

    // Iterate through the queue and print the elements
    for (int index = 0; index <= rear; index++) {
        printf("\n at index (%d) the value {%d}", index, list[index]);

        // Indicate the front and rear pointers
        if (index == front) {
            printf(" <- front ");
        }
        if (index == rear) {
            printf(" <- rear ");
        }
    }
    printf("\n");
}

void menu() { // Function to display the menu and handle user input
    char choice;

    system("clear"); // Clear the screen

    printf("▎queue Program\n");
    printf("▎Things you can do with linked queue:\n");
    printf("▎a - add a value to the queue\n");
    printf("▎d - delete a value from the queue\n");
    printf("▎p - print the queue\n");
    printf("▎q - quit the program\n");

    // Loop until the user chooses to quit
    while (1) {
        printf("▎Enter your choice (a-add, d-delete, p-print, q-QUIT ,c-clear "
               ") : ");
        scanf(" %c", &choice);

        switch (choice) { // Handle the user's choice

        case 'a':
            printf("\n");
            enqueue();
            break;
        case 'd':
            dequeue();
            break;
        case 'p':
            print();
            break;
        case 'q':
            printf("EXITED \n");
            return;
        case 'c':
            system("clear");
            break;
        default:
            printf("Invalid choice. Please try again.\n");
            break;
        }
    }
}

int main() {
    // Call the menu function to start the program
    menu();
    return EXIT_SUCCESS;
}

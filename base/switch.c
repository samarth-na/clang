#include <stdio.h>

int main() {
    char choice;
    printf("Linked List Program\n");
    printf("Things you can do with linked lists:\n");
    printf("a - add a value to the list\n");
    printf("d - delete a value from the list\n");
    printf("p - print the list\n");
    printf("q - quit the program\n");

    while (1) {
        printf("Enter your choice (a, d, p, q): ");
        scanf(" %c", &choice);

        switch (choice) {
        case 'a':
            printf("Add a value to the list\n");
            break;
        case 'd':
            printf("Delete a value from the list\n");
            break;
        case 'p':
            printf("Print the list\n");
            break;
        case 'q':
            printf("Quit the program\n");
            return 0;
        default:
            printf("Invalid choice. Please try again.\n");
            break;
        }
    }

    return 0;
}

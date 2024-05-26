#include <stdio.h>
#include <stdlib.h>

typedef struct node {
    int Value;
    struct node *Next;
} node;

typedef struct linkedlist {
    node START;
    node END;
    int length;
} linkedlist;

linkedlist list;
node start, end;

void addelement(int value) {
    if (list.START.Value == 0) {
        list.START.Value = value;
    } else {
        node newnode = {value, list.START.Next};
        list.START.Next = &newnode;
    };
};
void printlist() {
    node *current = list.START.Next;
    printf("Linked List: ");
    while (current != &list.END) {
        printf("%d ", current->Value);
        current = current->Next;
    }
    printf("\n");
}
int main() {
    list.length = 0;
    list.START = start;
    list.END = end;
    start.Next = &end;
    ;

    char choice;
    while (choice != 'q') {
        system("clear");
        printf("");
        printf("\n ================================================");
        printf("\n  Linked List Program");
        printf("\n  do you want to continue"
               "\n  for adding an element to list  [a]"
               "\n  for printing the list [n]"
               "\n  to exit type  [q]");

        printf("\n  enter what you wnat to do: ");
        scanf(" %c", &choice);

        switch (choice) {
        case 'a':
            printf("what value do you want to add to the list\n");
            int value;
            scanf("%d", &value);
            addelement(value);
            break;

        case 'd':
            break;
        case 'p':
            printlist();
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

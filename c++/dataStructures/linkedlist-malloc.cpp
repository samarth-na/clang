
#include <cstdlib>	// For malloc and free
#include <iostream>

// Node structure
struct Node {
	int data;
	Node* next;
};

// Function to insert a node at the beginning
void insert(Node** head, int data) {
	Node* newNode = (Node*)malloc(sizeof(Node));
	newNode->data = data;
	newNode->next = *head;
	*head = newNode;
}

// Function to print the linked list
void printList(Node* head) {
	while (head != nullptr) {
		std::cout << head->data << " -> ";
		head = head->next;
	}
	std::cout << "NULL" << std::endl;
}

// Function to free the linked list
void freeList(Node* head) {
	Node* temp;
	while (head != nullptr) {
		temp = head;
		head = head->next;
		free(temp);
	}
}

int main() {
	Node* head = nullptr;

	insert(&head, 3);
	insert(&head, 2);
	insert(&head, 1);

	printList(head);  // Output: 1 -> 2 -> 3 -> NULL

	freeList(head);
	return 0;
}

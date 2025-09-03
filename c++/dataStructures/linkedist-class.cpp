
#include <iostream>

// Node class
class Node {
   public:
	int data;
	Node* next;

	Node(int val) : data(val), next(nullptr) {}
};

// LinkedList class
class LinkedList {
   private:
	Node* head;

   public:
	LinkedList() : head(nullptr) {}

	// Function to insert a node at the beginning
	void insert(int data) {
		Node* newNode = new Node(data);
		newNode->next = head;
		head = newNode;
	}

	// Function to print the linked list
	void printList() {
		Node* current = head;
		while (current != nullptr) {
			std::cout << current->data << " -> ";
			current = current->next;
		}
		std::cout << "NULL" << std::endl;
	}

	// Destructor to free memory
	~LinkedList() {
		Node* current = head;
		while (current != nullptr) {
			Node* next = current->next;
			delete current;
			current = next;
		}
	}
};

int main() {
	LinkedList list;

	list.insert(3);
	list.insert(2);
	list.insert(1);

	list.printList();  // Output: 1 -> 2 -> 3 -> NULL

	return 0;
}

// TODO:
// linked-list
// double-linked-list
// circular-linked-list
// TODO:
// insert in the start, end, middle
// remove from the start, end, middle
// TODO:
// merge
// search
// sort
// TODO:
// backtracking
// recursion
// reverse

#include <iostream>

using namespace std;

typedef struct node {
	int data;
	node *prev;
	node *next;
} node;

class LinkedList {
	node *head;
	node *tail;
	int size;

   public:
	LinkedList() {
		head = NULL;
		tail = NULL;
		size = 0;
	}

	void insert(int data) {
		node *newNode = (node *)malloc(sizeof(node));
		if (head == NULL) {
			head = newNode;
			tail = newNode;
		} else {
			tail->next = newNode;
			tail = newNode;
		}
		size++;
	}

	void remove(int data) {
		node *temp = head;
		if (head == NULL) {
			cout << "List is empty" << endl;
			return;
		} else if (head->data == data) {
			head = head->next;
			delete temp;
			size--;
			return;
		}
		while (temp->next->data != data) {
			temp = temp->next;
		}
		node *toBeDeleted = temp->next;
		temp->next = toBeDeleted->next;
		delete toBeDeleted;
		size--;
	}

	void display() {
		node *temp = head;
		while (temp != NULL) {
			cout << temp->data << " ";
			temp = temp->next;
		}
		cout << endl;
	}
};

int main() {
	LinkedList list;
	list.insert(1);
	list.insert(2);
	list.insert(3);
	list.insert(4);
	list.insert(5);
	list.insert(6);
	list.display();
	list.remove(3);
	list.display();
	return 0;
}

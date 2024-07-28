In C/C++, there are several built-in data structures provided by the standard library. These data structures are implemented using different algorithms and are optimized for different use cases. Here's an overview of the commonly used data structures in C/C++:

---

1. **Arrays**: Arrays are a collection of elements of the same data type stored in contiguous memory locations. Arrays have a fixed size, and elements are accessed using an index. Arrays are suitable for storing and accessing data sequentially.
   ->

````c
#include <stdio.h>

int main() {
    int arr[5] = {10, 20, 30, 40, 50};  // Array initialization

    // Accessing array elements
    printf("Element at index 2: %d\n", arr[2]);  // Output: 30

    // Modifying array elements
    arr[3] = 45;

    // Iterating over the array
    printf("Array elements: ");
    for (int i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}```
--------------------------------------------------------------------------------------
2. **Linked Lists**: A linked list is a linear data structure where each element (node) contains a data field and a reference (link) to the next node in the sequence. Linked lists are dynamic in nature, meaning their size can grow or shrink during runtime. They are suitable for applications that require frequent insertions or deletions at arbitrary positions.
->
```c
#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

int main() {
    struct Node* head = NULL;  // Empty linked list

    // Creating a linked list: 10 -> 20 -> 30
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = 10;
    newNode->next = NULL;
    head = newNode;

    newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = 20;
    newNode->next = NULL;
    head->next = newNode;

    newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = 30;
    newNode->next = NULL;
    head->next->next = newNode;

    // Traversing the linked list
    struct Node* temp = head;
    printf("Linked list elements: ");
    while (temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");

    return 0;
}
````

---

3. **Stacks**: A stack is a linear data structure that follows the Last-In-First-Out (LIFO) principle. Elements are added and removed from the same end, called the top. Stacks are commonly used for backtracking algorithms, expression evaluation, and function call management.

4. **Queues**: A queue is a linear data structure that follows the First-In-First-Out (FIFO) principle. Elements are added at the rear end and removed from the front end. Queues are commonly used for handling tasks in the order they arrive, such as job scheduling or event handling.

5. **Trees**: A tree is a hierarchical data structure where data is organized in a parent-child relationship. Each node in the tree can have zero or more child nodes. Trees are useful for representing hierarchical data, such as file systems, organizational structures, or syntax trees in compilers.

6. **Binary Trees**: A binary tree is a tree data structure where each node can have at most two child nodes, referred to as the left child and the right child. Binary trees are commonly used for binary search trees, heaps, and expression trees.

7. **Binary Search Trees (BST)**: A binary search tree is a binary tree where the value of each node is greater than all the values in its left subtree and less than all the values in its right subtree. BSTs are efficient for searching, inserting, and deleting operations.

8. **Heaps**: A heap is a tree-based data structure that satisfies the heap property: the value of each node is either greater than or equal to (max heap) or less than or equal to (min heap) the values of its children. Heaps are commonly used for implementing priority queues.

9. **Hash Tables**: A hash table is a data structure that stores key-value pairs and provides constant-time average-case complexity for insertion, deletion, and lookup operations. Hash tables are widely used for efficient data retrieval and caching.

10. **Vectors**: A vector is a dynamic array implementation in C++, providing automatic memory management and flexible resizing capabilities. Vectors are commonly used when the size of the data is unknown or subject to change during runtime.

11. **Maps and Unordered Maps**: Maps (or associative arrays) store key-value pairs in a sorted order, while unordered maps store key-value pairs without maintaining any specific order. Both provide efficient lookup, insertion, and deletion operations.

12. **Sets and Unordered Sets**: Sets store unique elements in a sorted order, while unordered sets store unique elements without maintaining any specific order. Both provide efficient insertion, deletion, and membership testing operations.

These data structures are part of the C++ Standard Template Library (STL) and are widely used in various applications. The choice of data structure depends on the specific requirements of the problem, such as the need for efficient search, insertion, deletion, or traversal operations, as well as memory usage considerations.

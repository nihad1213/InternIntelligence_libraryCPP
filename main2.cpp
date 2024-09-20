#include "datastructures.h"
#include <iostream>

int main() {
    // Testing Dynamic Array
    DynamicArray dArray;
    initArray(&dArray, 5);
    std::cout << "Testing Dynamic Array:" << std::endl;
    insertArray(&dArray, 10);
    insertArray(&dArray, 20);
    insertArray(&dArray, 30);
    insertArray(&dArray, 40);
    insertArray(&dArray, 50);

    std::cout << "Array elements: ";
    for (int i = 0; i < dArray.size; i++) {
        std::cout << getArray(&dArray, i) << " ";
    }
    std::cout << std::endl;

    removeArray(&dArray, 2);
    std::cout << "After removing index 2: ";
    for (int i = 0; i < dArray.size; i++) {
        std::cout << getArray(&dArray, i) << " ";
    }
    std::cout << std::endl;
    freeArray(&dArray);

    // Testing Singly Linked List
    std::cout << "\nTesting Singly Linked List:" << std::endl;
    Node* head = nullptr;
    insertNode(&head, 1);
    insertNode(&head, 2);
    insertNode(&head, 3);
    std::cout << "Linked List: ";
    displayList(head);

    deleteNode(&head, 2);
    std::cout << "After deleting 2: ";
    displayList(head);

    // Testing Stack
    std::cout << "\nTesting Stack:" << std::endl;
    Stack stack;
    initStack(&stack, 5);
    push(&stack, 5);
    push(&stack, 10);
    push(&stack, 15);

    std::cout << "Top element: " << peek(&stack) << std::endl;
    std::cout << "Popping element: " << pop(&stack) << std::endl;
    std::cout << "Top element after pop: " << peek(&stack) << std::endl;

    // Testing Queue
    std::cout << "\nTesting Queue:" << std::endl;
    Queue queue;
    initQueue(&queue, 5);
    enqueue(&queue, 100);
    enqueue(&queue, 200);
    enqueue(&queue, 300);

    std::cout << "Dequeuing element: " << dequeue(&queue) << std::endl;
    std::cout << "Dequeuing element: " << dequeue(&queue) << std::endl;
    std::cout << "Queue front element after dequeue: " << dequeue(&queue) << std::endl;

    return 0;
}

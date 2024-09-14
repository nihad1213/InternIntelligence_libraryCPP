#pragma once
#include <iostream>
#include <cstdlib>

/** 
 * Dynamic Array 
 */
struct DynamicArray {
    int* arr;
    int capacity;
    int size;
};

/**
 * Initialize a dynamic array with a given capacity
 */
void initArray(DynamicArray* dArray, int capacity) {
    dArray->arr = (int*)malloc(capacity * sizeof(int));
    dArray->capacity = capacity;
    dArray->size = 0;
}

/**
 * Resize the dynamic array when it is full
 */
void resizeArray(DynamicArray* dArray) {
    dArray->capacity *= 2;
    dArray->arr = (int*)realloc(dArray->arr, dArray->capacity * sizeof(int));
}

/**
 * Insert element into the dynamic array
 */
void insertArray(DynamicArray* dArray, int element) {
    if (dArray->size == dArray->capacity) {
        resizeArray(dArray);
    }
    dArray->arr[dArray->size++] = element;
}

/**
 * Remove element from the dynamic array
 */
void removeArray(DynamicArray* dArray, int index) {
    if (index < 0 || index >= dArray->size) {
        std::cout << "Invalid index!" << std::endl;
        return;
    }
    for (int i = index; i < dArray->size - 1; i++) {
        dArray->arr[i] = dArray->arr[i + 1];
    }
    dArray->size--;
}

/**
 * Get element from the dynamic array
 */
int getArray(DynamicArray* dArray, int index) {
    if (index < 0 || index >= dArray->size) {
        std::cout << "Invalid index!" << std::endl;
        return -1;
    }
    return dArray->arr[index];
}

/** 
 * Free the dynamic array
 */
void freeArray(DynamicArray* dArray) {
    free(dArray->arr);
    dArray->arr = nullptr;
}

/** 
 * Singly Linked List Node
 */
struct Node {
    int data;
    Node* next;
};

/**
 * Insert a new node at the end of the linked list
 */
void insertNode(Node** head, int data) {
    Node* newNode = (Node*)malloc(sizeof(Node));
    newNode->data = data;
    newNode->next = nullptr;

    if (*head == nullptr) {
        *head = newNode;
    } else {
        Node* temp = *head;
        while (temp->next != nullptr) {
            temp = temp->next;
        }
        temp->next = newNode;
    }
}

/**
 * Delete a node from the linked list
 */
void deleteNode(Node** head, int key) {
    Node* temp = *head;
    Node* prev = nullptr;

    if (temp != nullptr && temp->data == key) {
        *head = temp->next;
        free(temp);
        return;
    }

    while (temp != nullptr && temp->data != key) {
        prev = temp;
        temp = temp->next;
    }

    if (temp == nullptr) return;

    prev->next = temp->next;
    free(temp);
}

/**
 * Display the linked list
 */
void displayList(Node* head) {
    Node* temp = head;
    while (temp != nullptr) {
        std::cout << temp->data << " -> ";
        temp = temp->next;
    }
    std::cout << "null" << std::endl;
}

/** 
 * Stack using Dynamic Array
 */
struct Stack {
    DynamicArray stackArray;
};

/**
 * Initialize a stack
 */
void initStack(Stack* stack, int capacity) {
    initArray(&stack->stackArray, capacity);
}

/**
 * Push element onto the stack
 */
void push(Stack* stack, int element) {
    insertArray(&stack->stackArray, element);
}

/**
 * Pop element from the stack
 */
int pop(Stack* stack) {
    if (stack->stackArray.size == 0) {
        std::cout << "Stack Underflow!" << std::endl;
        return -1;
    }
    return stack->stackArray.arr[--stack->stackArray.size];
}

/**
 * Peek at the top element of the stack
 */
int peek(Stack* stack) {
    if (stack->stackArray.size == 0) {
        std::cout << "Stack is empty!" << std::endl;
        return -1;
    }
    return stack->stackArray.arr[stack->stackArray.size - 1];
}

/** 
 * Queue using Dynamic Array
 */
struct Queue {
    DynamicArray queueArray;
    int front;
    int rear;
};

/**
 * Initialize a queue
 */
void initQueue(Queue* queue, int capacity) {
    initArray(&queue->queueArray, capacity);
    queue->front = 0;
    queue->rear = 0;
}

/**
 * Enqueue element into the queue
 */
void enqueue(Queue* queue, int element) {
    if (queue->queueArray.size == queue->queueArray.capacity) {
        resizeArray(&queue->queueArray);
    }
    queue->queueArray.arr[queue->rear++] = element;
    queue->queueArray.size++;
}

/**
 * Dequeue element from the queue
 */
int dequeue(Queue* queue) {
    if (queue->queueArray.size == 0) {
        std::cout << "Queue Underflow!" << std::endl;
        return -1;
    }
    int item = queue->queueArray.arr[queue->front++];
    queue->queueArray.size--;
    return item;
}

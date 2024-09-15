## Directory Structure
├── build/ # Directory for CMake build files 
├── inc/ # Directory for header files 
│ └── ownmath.h, datastructures.h # Header files library 
├── src/ # Directory for source files 
│ └── main.cpp, main2.cpp # Example source files for testing the library 
├── CMakeLists.txt # CMake configuration file 
└── README.md

# ownmath Library

## Overview
The OwnMath library provides a set of custom mathematical operations, including basic arithmetic, power, factorial, and trigonometric functions. This library allows users to perform various mathematical calculations easily.


## Functions

| Function Name       | Description                                               | Parameters                 | Return Type         |
|---------------------|-----------------------------------------------------------|----------------------------|----------------------|
| `sum`               | Calculates the sum of two numbers.                       | `double a, double b`       | `double`             |
| `sub`               | Calculates the subtraction of two numbers.               | `double a, double b`       | `double`             |
| `mul`               | Calculates the multiplication of two numbers.            | `double a, double b`       | `double`             |
| `divv`              | Calculates the division of two numbers.                  | `double a, double b`       | `double`             |
| `mod`               | Calculates the modulus of two numbers.                   | `long int a, long int b`   | `long int`          |
| `power`             | Calculates the power of a base number.                   | `double a, int b`          | `double`             |
| `factorial`         | Calculates the factorial of a non-negative integer.      | `int a`                    | `double`             |
| `abs`               | Calculates the absolute value of a number.               | `double a`                 | `double`             |
| `degreesToRadians`  | Converts degrees to radians.                              | `double degrees`           | `double`             |
| `sin`               | Calculates the sine of an angle using Taylor series.     | `double degrees`           | `double`             |
| `cos`               | Calculates the cosine of an angle using Taylor series.   | `double degrees`           | `double`             |
| `tan`               | Calculates the tangent of an angle.                      | `double degrees`           | `double`             |
| `ctg`               | Calculates the cotangent of an angle.                    | `double degrees`           | `double`             |

## Function Details

### `sum(double a, double b)`
Calculates the sum of two numbers.

### `sub(double a, double b)`
Calculates the subtraction of two numbers.

### `mul(double a, double b)`
Calculates the multiplication of two numbers.

### `divv(double a, double b)`
Calculates the division of two numbers. Returns 0 if the divisor is zero.

### `mod(long int a, long int b)`
Calculates the modulus of two numbers. Returns 0 if the divisor is zero.

### `power(double a, int b)`
Calculates the power of a number.

### `factorial(int a)`
Calculates the factorial of a non-negative integer. Returns -1 for negative input.

### `abs(double a)`
Calculates the absolute value of a number.

### `degreesToRadians(double degrees)`
Converts degrees to radians.

### `sin(double degrees)`
Calculates the sine of an angle using Taylor series.

### `cos(double degrees)`
Calculates the cosine of an angle using Taylor series.

### `tan(double degrees)`
Calculates the tangent of an angle. Returns 0 if the cosine is zero.

### `ctg(double degrees)`
Calculates the cotangent of an angle. Returns 0 if the tangent is zero.

## Example Usage

```cpp
#include "ownmath.h"
#include <iostream>

int main() {
    double angle = 30.0; // Example angle in degrees

    std::cout << "Sum: " << sum(3, 4) << '\n';
    std::cout << "Subtraction: " << sub(4.5, 6) << '\n';
    std::cout << "Multiplication: " << mul(1, 3) << '\n';
    std::cout << "Division: " << divv(1, 3) << '\n'; 
    std::cout << "Modulus: " << mod(12, 5) << '\n';
    std::cout << "Power: " << power(2, 3) << '\n';
    std::cout << "Factorial: " << factorial(5) << '\n';
    std::cout << "Absolute value: " << abs(-10.56) << '\n';
    std::cout << "sin(" << angle << ") = " << sin(angle) << '\n';
    std::cout << "cos(" << angle << ") = " << cos(angle) << '\n';
    std::cout << "tan(" << angle << ") = " << tan(angle) << '\n';
    std::cout << "cot(" << angle << ") = " << ctg(angle) << '\n';

    return 0;
}
```

# datastructures Library

## Overview

The OwnMath Library is a comprehensive C/C++ library that provides data structures and mathematical computations. This library includes implementations of a dynamic array, singly linked list, stack, and queue, allowing users to efficiently manage collections of data.

## Table of Contents

- [Dynamic Array](#dynamic-array)
  - [Functions](#functions)
- [Singly Linked List](#singly-linked-list)
  - [Functions](#functions-1)
- [Stack](#stack)
  - [Functions](#functions-2)
- [Queue](#queue)
  - [Functions](#functions-3)
- [Memory Management](#memory-management)
- [Examples](#examples)

## Dynamic Array

The **Dynamic Array** structure allows for resizing as elements are added. It manages an internal array with an initial capacity and expands as needed.

### Structure

```cpp
struct DynamicArray {
    int* arr;     // Pointer to the array
    int capacity; // Capacity of the array
    int size;     // Current size of the array
};

Functions
Function	Description
void initArray(DynamicArray* dArray, int capacity)	Initializes a dynamic array with a given capacity.
void resizeArray(DynamicArray* dArray)	Resizes the dynamic array when it is full.
void insertArray(DynamicArray* dArray, int element)	Inserts an element into the dynamic array.
void removeArray(DynamicArray* dArray, int index)	Removes an element from the dynamic array by index.
int getArray(DynamicArray* dArray, int index)	Gets an element from the dynamic array by index.
void freeArray(DynamicArray* dArray)	Frees the memory allocated for the dynamic array.
Singly Linked List

The Singly Linked List provides a flexible data structure for storing a sequence of elements. Each node contains data and a pointer to the next node.
Structure

cpp

struct Node {
    int data;   // Data in the node
    Node* next; // Pointer to the next node
};

Functions
Function	Description
void insertNode(Node** head, int data)	Inserts a new node at the end of the list.
void deleteNode(Node** head, int key)	Deletes a node from the list by its data value.
void displayList(Node* head)	Displays the elements in the linked list.
Stack

The Stack structure is built on top of the dynamic array, following Last-In-First-Out (LIFO) principles.
Structure

cpp

struct Stack {
    DynamicArray stackArray; // Dynamic array to store stack elements
};

Functions
Function	Description
void initStack(Stack* stack, int capacity)	Initializes a stack with a given capacity.
void push(Stack* stack, int element)	Pushes an element onto the stack.
int pop(Stack* stack)	Pops an element from the stack.
int peek(Stack* stack)	Returns the top element of the stack without removing it.
Queue

The Queue structure is also built on the dynamic array, adhering to First-In-First-Out (FIFO) principles.
Structure

cpp

struct Queue {
    DynamicArray queueArray; // Dynamic array to store queue elements
    int front;               // Front index
    int rear;                // Rear index
};

Functions
Function	Description
void initQueue(Queue* queue, int capacity)	Initializes a queue with a given capacity.
void enqueue(Queue* queue, int element)	Enqueues an element into the queue.
int dequeue(Queue* queue)	Dequeues an element from the queue.
void freeQueue(Queue* queue)	Frees the memory allocated for the queue.
Memory Management

The library provides functions to allocate and free memory for each data structure. Ensure to call the respective free functions to prevent memory leaks.
Examples

Here are some usage examples for each data structure.
Dynamic Array Example

cpp

DynamicArray arr;
initArray(&arr, 5);
insertArray(&arr, 10);
insertArray(&arr, 20);
std::cout << "Element at index 1: " << getArray(&arr, 1) << std::endl; // Output: 20
removeArray(&arr, 0);
freeArray(&arr);

Singly Linked List Example

cpp

Node* head = nullptr;
insertNode(&head, 1);
insertNode(&head, 2);
displayList(head); // Output: 1 -> 2 -> null
deleteNode(&head, 1);
displayList(head); // Output: 2 -> null

Stack Example

cpp

Stack stack;
initStack(&stack, 5);
push(&stack, 1);
push(&stack, 2);
std::cout << "Top element: " << peek(&stack) << std::endl; // Output: 2
std::cout << "Popped element: " << pop(&stack) << std::endl; // Output: 2
freeArray(&stack.stackArray); // Free stack resources

Queue Example

cpp

Queue queue;
initQueue(&queue, 5);
enqueue(&queue, 1);
enqueue(&queue, 2);
std::cout << "Dequeued element: " << dequeue(&queue) << std::endl; // Output: 1
freeQueue(&queue); // Free queue resources
```


# CMake Instructions
Navigate to the build directory:
```
cd build
```

Run CMake to configure the project:
```
cmake ..
```

Compile the project:
```
make
```

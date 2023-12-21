# Simple Stack Implementation in C
This repository contains a basic implementation of a stack data structure using a linked list in the C programming language.


## Table of Contents
- [Overview](#overview)
- [Files](#files)
- [How to Use](#how-to-use)
- [Functions](#functions)
- [Sample Test](#sample-test)


## Overview

The provided C code defines a stack structure using a linked list and includes functions for common stack operations, such as push, pop, display, and size. The main program demonstrates the usage of these functions.

## Files

- `stack.h`: Header file containing the structure definition and function prototypes.
- `stack.c`: Implementation file with the actual code for the stack functions.

## How to Use

1. Include the `stack.h` header file in your program.
2. Compile your program with the `stack.c` implementation file.
3. Use the provided stack functions in your code for stack operations.

## Functions
`Stack *push(Stack *top, int push_data)`: Adds a new element to the top of the stack.
`Stack *pop(Stack *top)`: Removes the element from the top of the stack.
`void display_stack(Stack *top)`: Displays all elements in the stack.
`void free_stack(Stack *top)`: Frees the memory allocated for all stack elements.
`int is_empty(Stack *top)`: Checks if the stack is empty.
`int peek(Stack *top)`: Returns the value at the top of the stack without removing it.
`int size(Stack *top)`: Returns the number of elements in the stack.

## Sample Test

You can use the following test as a starting point to verify the functionality of the implemented stack.

```c
int main(){
	Stack *top = NULL;
    int choice, data;

    do {
        printf("\n1. Push\n2. Pop\n3. Display\n4. Peek\n5. Size\n6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter data to push: ");
                scanf("%d", &data);
                top = push(top, data);
                break;

            case 2:
                top = pop(top);
                break;

            case 3:
                display_stack(top);
                break;

            case 4:
                printf("Peek: %d\n", peek(top));
                break;

            case 5:
                printf("Size: %d\n", size(top));
                break;

            case 6:
                // Free the memory and exit
                free_stack(top);
                return 0;

            default:
                printf("Invalid choice. Please try again.\n");
        }

    } while (1);

	return 0;
}

#ifndef STACK_H
#define STACK_H

/**
 * @struct stack_node
 * @brief Structure representing a node in the stack.
 */
typedef struct stack_node{
	int data; /**< Data stored in the node. */
	struct stack_node *next; /**< Pointer to the next node in the stack. */
}Stack;

/**
 * @brief Pushes a new element onto the stack.
 * @param top Top of the stack.
 * @param push_data Data to be pushed onto the stack.
 * @return Updated top of the stack.
 */
Stack *push(Stack *top, int push_data);

/**
 * @brief Pops the top element from the stack.
 * @param top Top of the stack.
 * @return Updated top of the stack.
 */
Stack *pop(Stack *top);

/**
 * @brief Displays all elements in the stack.
 * @param top Top of the stack.
 */
void display_stack(Stack *top);

/**
 * @brief Frees the memory allocated for all stack elements.
 * @param top Top of the stack.
 */
void free_stack(Stack *top);

/**
 * @brief Checks if the stack is empty.
 * @param top Top of the stack.
 * @return 1 if the stack is empty, 0 otherwise.
 */
int is_empty(Stack *top);

/**
 * @brief Returns the value at the top of the stack without removing it.
 * @param top Top of the stack.
 * @return Value at the top of the stack, or -1 if the stack is empty.
 */
int peek(Stack *top);

/**
 * @brief Returns the number of elements in the stack.
 * @param top Top of the stack.
 * @return Number of elements in the stack, or -1 if the stack is empty.
 */
int size(Stack *top);

#endif

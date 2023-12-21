#include <stdio.h>
#include <stdlib.h>
#include "stack.h"

int is_empty(Stack *top){
	return top == NULL;
}

void display_stack(Stack *top){
	if(is_empty(top)){ 
		printf("The stack is empty!\n");
		return;
	}
		Stack *temp = top;
		int counter = 0;
		while(temp != NULL){
			printf("Stack %d is: %d \n", counter, temp->data);
			temp = temp->next;
			counter++;
		}
	
}

Stack *push(Stack *top, int push_data){
		Stack *temp = malloc(sizeof(Stack));
		if(is_empty(temp)) return NULL;
		temp->next = top;
		temp->data = push_data;
		top = temp;
		return top;
}

Stack *pop(Stack *top){
	if(is_empty(top)) return NULL;
	Stack *temp = top;
	top = top->next;
	free(temp);
	return top;
}



void free_stack(Stack *top){
	if(is_empty(top)) return;
	Stack *temp;
	while(top != NULL){
		temp = top;
		top = top->next;
		free(temp);
	}
}

int peek(Stack *top){
	if(is_empty(top)) return -1;
	return top->data;
}

int size(Stack *top){
	if(is_empty(top)) return -1;
	int counter = 1;
	Stack *temp = top;
	while(temp->next != NULL){
		counter++;
		temp = temp->next;
	}
	return counter;
}

#include <stdio.h>
#include <stdlib.h>

typedef struct node{
	void* data_ptr;
	struct node* link; 
}STACK_NODE;

typedef struct stack{
	int count;
	STACK_NODE* top;
}STACK;


STACK* create_stack();
int push(STACK* stack, void* in);
void* pop(STACK* stack);
 

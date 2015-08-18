#ifndef COLLECTION_STACK
#define COLLECTION_STACK

typedef struct collection_stack Stack;

Stack* stack_create();

void stack_push(Stack* stack, int value);

int stack_pop(Stack* stack);

#endif

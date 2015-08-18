#include "stdlib.h"
#include "list.h"
#include "stack.h"

struct collection_stack {
    CollectionList list;
    int len;
};

Stack* stack_create()
{
    Stack* stack = (Stack*)malloc(sizeof(Stack));
    stack->list = collection_list_create();
    stack->len = 0;
    return stack;
}

void stack_push(Stack* stack, int value)
{
    CollectionList* list = stack->list;
    collection_list_append(list, value);
}

int stack_pop(Stack* stack)
{
    return collection_list_pop(stack->list);
}

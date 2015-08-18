#include "stdlib.h"
#include "list.h"

struct collection_list_node
{
    struct collection_list_node *prev;
    struct collection_list_node *next;
    int value;
};

struct collection_list
{
    struct collection_list_node *head;
    struct collection_list_node *last;
};

struct collection_list_node* list_node_create()
{
    struct collection_list_node *node = (struct collection_list_node*)malloc(sizeof(struct collection_list_node));
    node->prev = NULL;
    node->next = NULL;
    node->value = 0;
    return node;
}

CollectionList* collection_list_create()
{
    CollectionList* list = (CollectionList*)malloc(sizeof(CollectionList));
    struct collection_list_node *head = list_node_create();
    list->head = head;
    list->last = head;
    return list;
}

int collection_list_size(CollectionList *list)
{
    struct collection_list_node *current = list->head;
    int size = 0;
    while (current != list->last) {
        current = current->next;
        size = size + 1;
    }

    return size;
}

void collection_list_append(CollectionList *list, int data)
{
    struct collection_list_node *last = list->last;
    struct collection_list_node *node = list_node_create();
    node->value = data;
    node->prev = last;
    last->next = node;
    list->last = node;
}

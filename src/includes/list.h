#ifndef COLLECTION_LIST
#define COLLECTION_LIST

typedef struct collection_list CollectionList;

CollectionList* collection_list_create();

int collection_list_size(CollectionList *list);

void collection_list_append(CollectionList *list, int data);

void collection_list_prepend(CollectionList *list, int data);

int collection_list_pop(CollectionList *list);

int collection_list_shift(CollectionList *list);

int collection_list_empty(CollectionList* list);

#endif

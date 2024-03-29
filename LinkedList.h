#ifndef _LINKEDLIST_H
#define _LINKEDLIST_H
#include <stddef.h>

typedef signed long int Long;
typedef struct _node Node;
typedef struct _node{
	Node *previous;
	Node *next;
} Node;
typedef struct _linkedList{
	Node *head;
	Node *tail;
	Long length;
	Node *current;
} LinkedList;

//�Լ�����
void LinkedList_Create(LinkedList *linkedList);
Node* LinkedList_InsertBefore(LinkedList *linkedList, Node *index, void *object, size_t size);
Node* LinkedList_InsertAfter(LinkedList *linkedList, Node *index, void *object, size_t size);
Node* LinkedList_AppendFromHead(LinkedList *linkedList, void *object, size_t size);
Node* LinkedList_AppendFromTail(LinkedList *linkedList, void *object, size_t size);
Node* LinkedList_Delete(LinkedList *linkedList, Node *index);
Node* LinkedList_DeleteFromHead(LinkedList *linkedList);
Node* LinkedList_DeleteFromTail(LinkedList *linkedList);
void LinkedList_DeleteAllItems(LinkedList *linkedList);
Node* LinkedList_LinearSearchUnique(LinkedList *linkedList, void *key, size_t size, int (*compare)(void*,void*));
void LinkedList_LinearSearchDuplicate(LinkedList *linkedList, void *key, Node**(*indexes), Long *count, size_t size, int(*compare)(void*, void*));
Node* LinkedList_First(LinkedList *linkedList);
Node* LinkedList_Previous(LinkedList *linkedList);
Node* LinkedList_Next(LinkedList *linkedList);
Node* LinkedList_Last(LinkedList *linkedList);
void LinkedList_GetAt(LinkedList *linkedList, Node *index, void *object, size_t size);
Node* LinkedList_Move(LinkedList *linkedList, Node *index);

void LinkedList_Destroy(LinkedList *linkedList);

#endif//_LINKEDLIST_H
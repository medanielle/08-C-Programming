#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include "TestCode.h"

/*
Task #1

Write the function buildList that receives two parameters:
    names - an array of char * of people's first names
    size - the number of elements in the array

The buildList function should iterate through the "names" array and create a doubly-linked list
creating a node for each name in the list. Use the nameNode class defined in the TestCode.h file to create the
doubly-linked list. Each name is added to the head of the doubly-linked list.

The function should return a pointer to the head node of the doubly-linked list when complete.

Task #2

Write the function removeNode that receives two parameters:
    head - The first node in the doubly-linked list created in Task 1
    findName - a char * of a person's name that may be in a linked-list

The removeNode function will search the doubly-linked list for the name in "findName". If found, the node containing the
name must be removed from the doubly-linked list, ensure to cleanup any memory. If not found, do nothing.

The function should return a pointer to the head node of the doubly-linked list when complete.

Task #3

Write the function freeMemory that receives a pointer to your linked-list's head
node so you can iterate over the link list and free all allocated memory.

*/

struct nameNode* buildList(char** names, int size)
{
	struct nameNode *head;

	return head;

}

struct nameNode* removeNode(struct nameNode* head, char* findName)
{
    return head;
}

void freeMemory(struct nameNode *head)
{

}

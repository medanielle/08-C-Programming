
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include "TestCode.h"

/*
Task #1

Write the function processNames that receives a 10-element array of char *. The
array contains a list of peoples' first names. The processNames function should 
create a linked list using the nameNode struct defined in Testcode.h.
The processNames function should iterate the array and insert the names into nodes 
so they are in ascending (alphabetical) order in the linked list.

The processNames function should return a pointer to the head node of the link 
list once processed.

Task #2

Write the funtion freeMemory that receives a pointer to your linked-list's head
node so you can iterate over the link list and free all allocated memory.

*/





struct nameNode * processNames(char ** names)
{
	struct nameNode *head;
	return head;
}

void freeMemory(struct nameNode *head)
{

}

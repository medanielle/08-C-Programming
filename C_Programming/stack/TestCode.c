
#include <stdio.h>
#include <string.h>
#include "TestCode.h"


/*
This task will implement a simple stack using a linked list. A numNode struct is defined in the 
TestCode.h file to facilitate the creation of the stack.

Write the function createStack that received two parameters:

    actions: an int array - this array contains values in the even indicies 0,2,4 etc that indicate which type of 
	                        action to do with the stack:
					    	1 - pop the stack
					    	2 - push onto the stack
					    	3 - empty the stack

					    	The odd indicies will only apply for push actions. If the action received is action
					    	push (2), then the following index contains the value to push onto the stack. The
					    	odd indicies have no effect on pop (1) or empty stack (3)
					    	
					    	So if the function receives:  [2, 7, 2, 2, 1, 0, 3, 0], then you would push 7 onto
					    	the stack, then push 2 onto the stack, then pop the stack, then empty the stack.

    numActions: the total number of actions supplied in the array

The function should iterate the actions array and determine what actions should occur on the stack.  Use a 'switch'
statement to determinie which action to take on the stack and provide the implementation for popping, pushing, and 
emptying the stack accordingly.

If any action provided is not 1, 2, or 3, then return NULL.

Assume that the array will always have an even number of elements. 

The function will return a pointer that points to the top of the stack.

*/

 

struct numNode * createStack(int actions[], int numActions)
{
	struct numNode *top = NULL;
	return top;
}



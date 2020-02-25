
#include <stdio.h>
#include <string.h>
#include "TestCode.h"


/*
Correct syntax in computer programming requires all opening container characters such as parenthesis '(', braces '{', brackets '[ have a closing
 matching container character ')','}', ']'. For valid syntax, when a closing character is encoutered, it means a matching opening container
character exists. There cannot be any other opening container characters between the closing and opening one.

There must be also the same number of opening container character types as closing container character types.

The following is valid syntax example:

if (x == y) { scores[(x + 1)] = 50; }

The following is an invalid syntax example:

if (x == y) { scores[(x + 1]) = 50; }  // for the ] there is a previous ( before the matching [

The following is an invalid syntax example:

if (x == y) { scores[(x + 1)] = 50;   // there is no matching } for the opening {

Write a function called validateSyntax that receives a string of code and an empty char array. 
The function should use the passed char array to implement a rudimentary stack that 
keeps track of the opening/closing container characters. 

if the code string received is empty, the function should return ERROR_INVALID_DATA

If the code string received has valid syntax, the function should return ERROR_SUCCESS, 

if the code string received has invalid, the function should return ERROR_INVALID_BLOCK

*/

#include<stdio.h> 
#include<stdlib.h> 
#define bool int 

/* structure of a stack node */
struct sNode 
{ 
	char data; 
	struct sNode *next; 
}; 

/* Function to push an item to stack*/
void push(struct sNode** top_ref, int new_data); 

/* Function to pop an item from stack*/
int pop(struct sNode** top_ref); 

/* Returns 1 if character1 and character2 are matching left 
and right Parenthesis */
bool isMatchingPair(char character1, char character2) 
{ 
	if (character1 == '(' && character2 == ')') 
		return 1; 
	else if (character1 == '{' && character2 == '}') 
		return 1; 
	else if (character1 == '[' && character2 == ']') 
		return 1; 
	else
		return 0; 
} 

/*Return 1 if expression has balanced Parenthesis */
bool areParenthesisBalanced(char exp[]) 
{ 
	int i = 0; 

	/* Declare an empty character stack */
	struct sNode *stack = NULL; 

	/* Traverse the given expression to check matching parenthesis */
	while (exp[i]) 
	{ 
		/*If the exp[i] is a starting parenthesis then push it*/
		if (exp[i] == '{' || exp[i] == '(' || exp[i] == '[') 
			push(&stack, exp[i]); 

		/* If exp[i] is an ending parenthesis then pop from stack and 
			check if the popped parenthesis is a matching pair*/
		if (exp[i] == '}' || exp[i] == ')' || exp[i] == ']') 
		{ 
				
			/*If we see an ending parenthesis without a pair then return false*/
			if (stack == NULL) 
			return 0; 

			/* Pop the top element from stack, if it is not a pair 
				parenthesis of character then there is a mismatch. 
				This happens for expressions like {(}) */
			else if ( !isMatchingPair(pop(&stack), exp[i]) ) 
			return 0; 
		} 
		i++; 
	} 
		
	/* If there is something left in expression then there is a starting 
		parenthesis without a closing parenthesis */
	if (stack == NULL) 
		return 1; /*balanced*/
	else
		return 0; /*not balanced*/
} 



/* Function to push an item to stack*/
void push(struct sNode** top_ref, int new_data) 
{ 
	/* allocate node */
	struct sNode* new_node = (struct sNode*) malloc(sizeof(struct sNode)); 

	if (new_node == NULL) 
	{ 
		printf("Stack overflow n"); 
		getchar(); 
		exit(0); 
	}		 

	/* put in the data */
	new_node->data = new_data; 

	/* link the old list off the new node */
	new_node->next = (*top_ref); 

	/* move the head to point to the new node */
	(*top_ref) = new_node; 
	} 

/* Function to pop an item from stack*/
int pop(struct sNode** top_ref) 
{ 
	char res; 
	struct sNode *top; 

	/*If stack is empty then error */
	if (*top_ref == NULL) 
	{ 
		printf("Stack overflow n"); 
		getchar(); 
		exit(0); 
	} 
	else
	{ 
		top = *top_ref; 
		res = top->data; 
		*top_ref = top->next; 
		free(top); 
		return res; 
	} 
} 



int validateSyntax(char * code, char stack[])
{
	// If the code string received is empty, the function should return ERROR_INVALID_DATA
	if (code == ""){
		return -1;
	}
	// If the code string received has valid syntax, the function should return ERROR_SUCCESS, 
	else if (areParenthesisBalanced(code)) 
		return 1; 
	else
	// If the code string received has invalid, the function should return ERROR_INVALID_BLOCK
		return 0;
}

/* UTILITY FUNCTIONS */
/*driver program to test above functions*/
int main() 
{ 
	char stack[50] = { 0 };
	char * code = "The([{(some code)}]";
	
	printf("Return %d\n", validateSyntax(code, stack)); //ASSERT_EQ(ERROR_INVALID_BLOCK, 
	char * code2 = "";
	printf("Return %d\n", validateSyntax(code2, stack)); //ASSERT_EQ(ERROR_INVALID_DATA, 

	char * code3 = "The([{(some code)]})";
	printf("Return %d\n", validateSyntax(code3, stack)); //ASSERT_EQ(ERROR_INVALID_BLOCK, 

	char * code4 = "The([{(some code)}])";
    printf("Return %d\n", validateSyntax(code4, stack)); //ASSERT_EQ(ERROR_SUCCESS, 
	
	char * code5 = "for (int i = 0; i < 4; i++)	{ total += .05 * quiz[i]; } for (int i = 0; i < 6; i++) { if (i != low) { total += .05 * project[i];}}";
	printf("Return %d\n", validateSyntax(code5, stack)); //ASSERT_EQ(ERROR_SUCCESS, 

	return 0; 
}	 
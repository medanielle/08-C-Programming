
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


int validateSyntax(char * code, char stack[])
{

	return 0;
}


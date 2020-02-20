
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "TestCode.h"



/*
Write a function makeParagraph that accepts a character pointer to a char pointer array representing multiple sentences, and an int
representing the number of sentences.  Each sentence is a part of a paragraph. Each sentence is terminated with a signle digit 
(from 0 up to 9) representing the order the sentence should appear in the paragraph. The function should return the ordered 
paragraph as a single string with the digits at the end of the sentence replaced with a space. 
However, the last sentence should not have a space after it.

For example, you may be passed the following pointer to pointer array of char:

char **strings = {"What's yours?3", "Hello there!1", "My name is Jimmy.2"};

the function will return the string:  "Hello there! My name is Jimmy. What's yours?"

If any sentence in the array is empty, return the string: "INVALID".

Assume all valid data has the correct and valid sequence of numbers


*/


char * makeParagraph(char **sentences, int size)
{
	char * para;
	return para;
}


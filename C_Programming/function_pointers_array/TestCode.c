
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "TestCode.h"


/*
Step 1:  Write the three functions below:

getInitials
getFirstLast
getLastFirst

Each of these functions receive two char * arrays that represent a person's first name and
last name in that order. Each function also returns a char * array.  Specifically:

getInitials returns a two-character array of the persons capitalized initials, so if the function
receives "John" as first name and "Hancock" as last name, the function returns "JH".

getFirstLast returns the first name, followed by a space, and then the last name. The first and last name
must be capitalized.  So, if the function receives "John" as first name and "Hancock" as last name, 
the function returns "John Hancock".

getLastFirst returns the last name, followed by a comma and a space, and then the first name. The first and last name
must be capitalized.  So, if the function receives "John" as first name and "Hancock" as last name,
the function returns "Hancock, John".

Step 2: Write the processNames function

The processNames function receives three parameters:

1. choice: An integer - representing the choice of a function to call
2. first: A char * - representing the first name of a person (may or may not be capitalized)
3. last: A char * - representing the last name of the person (may or may not be capitalized)

The processNames function should create an array of function pointers to the three functions getInitials,
getFirstLast, and getLastFirst in that order.  The values in "first" and "last" will be passed to these functions.

The "choice" will determine which of the functions to call. Valid values for choice are 0, 1 or 2:
      0 will inicate using the function pointer in the first element of your pointer array etc.

Finally, the processNames function will capture and return the char * that was returned from the called function (getInitials,
getFirstLast, getLastFirst) 

If the choice is < 0 or > 2, the processNames function should return an empty string "".

if either first or last is an empty string, the processNames function should return an empty string ""

*/



char * getInitials(char * first, char * last)
{
    char * inits;
    return inits;
}

char * getFirstLast(char * first, char * last) 
{
    char * name;
    return name;
}

char * getLastFirst(char * first, char * last)
{
    char * name;
    return name;
}

  

char * processName(int choice, char * first, char * last) 
{
	char * temp;
    return temp;

}

 

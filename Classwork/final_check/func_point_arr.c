
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
    char * inits = malloc(3*sizeof(char));
    inits[0] = toupper(first[0]);

    inits[1] = toupper(last[0]);

    inits[2] = '\0';

    return inits;
}

char * getFirstLast(char * first, char * last) 
{
    char * name = malloc(100*sizeof(char));

    name[0] = toupper(first[0]);
    name[1] = '\0';    
    strcat(name, &first[1]);

    int len = strlen(name);
    name[len] = ' ';
    name[len + 1] = toupper(last[0]);
    name[len + 2] = '\0';

    strcat(name, &last[1]);

    return name;
}

char * getLastFirst(char * first, char * last)
{
    char * name = malloc(100*sizeof(char));
    name[0] = toupper(last[0]);
    name[1] = '\0';    
    strcat(name, &last[1]);

    int len = strlen(name);
    name[len] = ',';
    name[len+1] = ' ';
    name[len + 2] = toupper(first[0]);
    name[len + 3] = '\0';

    strcat(name, &first[1]);

    return name;
    return name;
}

  

char * processName(int choice, char * first, char * last) 
{
	char * temp = malloc(100*sizeof(char));
    char * (*my_func[3])(char * first, char * last) = {getInitials, getFirstLast, getLastFirst};
    //If the choice is < 0 or > 2, //if either first or last is an empty string, 
    if (choice< 0 || choice >2 || first == ""|| last == ""){
        // the processNames function should return an empty string "".
        temp = "";
        return "";
    }

    strcpy(temp, my_func[choice](first, last));
    // DEBUG  printf("func_pointer:\t %s\n", temp);
    return temp;

}

int main(){

    printf("main: %s\n", processName(1, "John", "Hancock"));
    printf("main: %s\n", processName(2, "John", "Hancock"));
    printf("main: %s\n", processName(0, "John", "Hancock")); 

    char * temp;
    temp = (processName(3, "John", "Hancock"));
    if (temp == "") printf("Empty String\n");
    printf("main: %s\n", (processName(3, "John", "Hancock")));

    char * temp2;
    temp2 = processName(1, "", "Hancock");
    if (temp2 == "") printf("Empty String\n");
    printf("main: %s\n", processName(1, "", "Hancock"));

    char * temp3;
    temp3 = processName(2, "John", "");
    if (temp3 == "") printf("Empty String\n");
    printf("main: %s\n", processName(2, "John", ""));

    printf("main:\t\t %s\n", processName(1, "john", "hancock"));
    printf("main:\t\t %s\n", processName(2, "john", "hancock"));
    printf("main:\t\t %s\n", processName(0, "john", "hancock")); 
    return 0;
}

	// strcmp("John Hancock",(processName(1, "John", "Hancock"))));
	// strcmp("Hancock, John", (processName(2, "John", "Hancock"))));
	// strcmp("JH", (processName(0, "John", "Hancock"))));
	// strcmp("", (processName(3, "John", "Hancock"))));
	// strcmp("", (processName(1, "", "Hancock"))));
	// strcmp("", (processName(2, "John", ""))));
	// strcmp("John Hancock", (processName(1, "john", "hancock"))));
	// strcmp("Hancock, John", (processName(2, "john", "hancock"))));
	// strcmp("JH", (processName(0, "john", "hancock"))));
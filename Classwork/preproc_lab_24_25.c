#include<stdio.h>

/*
# PERFORMANCE LAB 24

## PREPROCESSOR DIRECTIVES

### **Write a C program with preprocessor directives to:**
1. Combine two string literals
2. Wrap those string literals in quotes
3. Define a constant buffer size of 64

### **Define an array:**
1. Of standard buffer size
2. Assign the wrapped string literals to the array

## **Print the array**
*/
#define STRINGIFY_FOR_REAL(x) #x
#define STRINGIFY(a) STRINGIFY_FOR_REAL(a)
#define PASTE_FOR_REAL(x, y) x##y
#define PASTE(a, b) PASTE_FOR_REAL(a,b)

# define BUFFSIZE 64

int lab24()
{
    char inBuff[BUFFSIZE] = STRINGIFY(PASTE(First , Second));
    puts(inBuff);
    return 0;
}

/*
# PERFORMANCE LAB 25

## CONDITONAL COMPILATION

* Redefine EOF as 66 (without compiler warnings)
* Use preprocessor directive(s) to:
    * Only compile in "release" and only compile if _INC_STDIO is defined
    * Prints the name of a MACRO and also print the integer value of that MACRO
    * Use a #else 'fall through' for ease of use and safety
* Use your preprocessor directives on FOPEN_MAX, FILENAME_MAX, and EOF

Notes: #if defined(name1) && defined(name2)     	// If name1 *and* name2 are defined…
[…code…]					// …then compile this code.
#endif				      	// That is all.

#if name1 == 0 || defined(name2)        	// name1 is 0 *or* name2 is defined…
[…code…]				 	// …then compile this code.
#endif				      	// That is all.
*/
#ifdef _INC_STDIO
#endif

int lab25(){

#undef EOF
#define EOF (66)

    return 0;

}

#include <stdio.h>

// define an "in release" specifier for an if defined check for compilation
#ifndef release
#define release "in release"
#endif

// define the _INC_STDIO specifier for an if defined check for compilation
#ifndef _INC_STDIO
#define _INC_STDIO 1
#endif

// redefine EOF to 66
#ifdef EOF
#undef EOF
#endif
#define EOF 66

// compile if in "release" && _INC_STDIO defined
#if defined(release) && defined(_INC_STDIO)
#define PRINT_MACRO(x) printf(#x " is %d\n", x) // MACRO to print a MACRO and it's value

int chunn_25()
{
    // if FOPEN_MAX, FILENAME_MAX, and EOF are defined
    #if defined(FOPEN_MAX) && defined(FILENAME_MAX) && defined(EOF)
    PRINT_MACRO(FOPEN_MAX); // print the MACRO and it's value
    PRINT_MACRO(FILENAME_MAX);
    PRINT_MACRO(EOF);
    #else
    // otherwise print that the expected MACROs were not defined
    printf("Expected MACROs were not found to be defined!\n");
    #endif
    return 0;
}
#endif

int main(){
    //lab24();
    //lab25();
    chunn_25();
}
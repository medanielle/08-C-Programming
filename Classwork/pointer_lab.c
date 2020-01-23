/*
That means “Memory math” can be counter-intuitive. For example, the next memory address after 0x0090C079 is 0x0090C07A. 
*/
/*
https://github.com/medanielle/08-C-Programming/blob/master/11_Pointers_Arrays/04_memory_visualization.md 
POP Quiz:
What is the value at memory address 0x0090C079?   53
What is the value at memory address 0x0090C08B?   30
What is the value at memory address 0x0090C08F?   00
What is the memory address of 0x2e (line: dword 16)?    0x0090C08E
What is the memory address of 0x2c (line: dword 15)?    0x0090C088
Name a memory address for value 0x30.    0x0090C073    0x0090C08B    0x0090C055
*/


#include <stdio.h>
int demo_point(){
/*
Demonstration Lab - Memory Operators
"Title Not Found" Note to Instructor: ‘Live code’ this for the class on the big screen. Let the class decide on appropriate uses/implementations of each of the requirements.

Declare two variables, named var1 and var2, of the same data type
Declare a pointer variable, named var_ptr, of the same data type
Define the first variable with an arbitrary value
Assign var1’s memory address to var_ptr
Define var2 by dereferencing var_ptr
Compare var1 to var2 and print human-readable results
*/

//Declare two variables, named var1 and var2, of the same data type,  and a pointer variable, named var_ptr, of the same data type
int var1 = 45, var2;
int * var_ptr;

//Assign var1’s memory address to var_ptr
var_ptr = &var1;

//Define var2 by dereferencing var_ptr
var2 = *var_ptr;

//Compare var1 to var2 and print human-readable results
printf("\nvariable 1: %d\nvariable 2: %d\nvariable pointer: %p\n", var1, var2, var_ptr);
} 


///////////////////////////////////////////////////////////////////////////////////////////////////////////////////


/*
    Performance Lab - Memory Operators
    "Reference Not Found"
        Declare userInput, tempValue, and input_ptr as the same data type
        Read user input into variable userInput
        Ensure tempValue contains the same value as userInput utilizing one or more memory operators
                    tempValue = userInput; // NOT PERMITTED... use a memory operator

        Print the value and the pointer for each of the three variables in a human readable format
        Locate those addresses in the "memory window"
        Submitt your work to the appropriate location for instructor review
    Note: "input_ptr" should be a pointer variable
*/


int mem_op(){
    //Declare userInput, tempValue, and input_ptr as the same data type
    int userInput, tempValue;
    int * input_ptr;
    //Read user input into variable userInput
    printf("Enter an integer: ");
    scanf("%d", &userInput);

    //Ensure tempValue contains the same value as userInput utilizing one or more memory operators
    input_ptr = &userInput;
    tempValue = *input_ptr;

    //from demo lab (https://github.com/medanielle/08-C-Programming/blob/master/11_Pointers_Arrays/demonstration_labs/PointerDemoLab_1.md)
    printf("\nDebug:\nThe address of user input is %p\nThe value of input_ptr is %p\n", &userInput, input_ptr);
    printf("\n\nShowing that * and & are complements of each other\n&*aPtr = %p\n*&aPtr = %p\n", &*input_ptr, *&input_ptr);

    //Print the value and the pointer for each of the three variables in a human readable format
    printf("\nuser input: %d\ntemp value: %d\ninput pointer: %p\n", userInput, tempValue, input_ptr);

    //Locate those addresses in the "memory window"????
    return 0;
}


///////////////////////////////////////////////////////////////////////////////////////////////////////////////////

/*
Demonstration Lab "The Little Integer That Could"

int * find_smallest_natural_number(int * intArray_ptr, int arraySize);
Return value - int pointer to the smallest natural number found in the array at intArray_ptr
    Parameters -
        intArray_ptr - Pointer to an array of integers...
        arraySize - ...of this dimension
        Purpose - find the smallest natural number
    Requirements
        Return NULL if intArray_ptr is NULL
        Return NULL if arraySize is unrealistic
Note - For the purposes of this lab, “natural number” is defined as a whole, positive integer greater than zero [1,2,3,4…]
*/

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int * find_smallest_natural_number(int * intArray_ptr, int arraySize){
        int * smallest = intArray_ptr;
        int i;
        for (i = 1; i < (arraySize); ++i) {
            //printf("i+1 : %d = %d\t<\t i : %d = %d\n ", i+1, *(intArray_ptr+i), i ,*smallest);
            if (*(intArray_ptr+i) < *smallest){
                smallest = &*(intArray_ptr+i);
            }
        }
        if (intArray_ptr == NULL){
            return NULL;
        }
        else if (arraySize <=0){
            return NULL;
        }
        else if (smallest ==NULL){
            return 0;
        }
        else{
            return smallest;
        }
    }

int demo_small(){
    int array[] = {7, 9, 10, 1, 2, 3, 8, 0};
    int * my_small = find_smallest_natural_number(array, 4);
    //printf(array);
    printf("\nSmallest = %d\n", *my_small);

    return 0;
}


/*
String Splitter

    char * split_the_string(char * string_ptr, char delimiter);
    Return value - char pointer to the second string
    Parameters -
        string_ptr - Pointer to a null terminated string
        delimiter - Character that divides the two strings
        Purpose - Split one string into two at a delimiter char
    Requirements
        Only Address Arithmetic is permitted on string_ptr
        string_ptr if delimiter is not found
        Return ERROR_NULL_POINTER if string_ptr has more that one occurrence of delimiter
        Return ERROR_NULL_DELIMITER if the delimiter is '\0' (0x0)
    Note- The error codes for this lab are MACROS #defined as: #define ERROR_NULL_POINTER ((char*)-1) #define ERROR_ABUNDANT_POINTER ((char*)-2) #define ERROR_NULL_DELIMITER ((char*)-3)
*/

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#define ERROR_NULL_POINTER ((char*)-1)
#define ERROR_ABUNDANT_POINTER ((char*)-2)
#define ERROR_NULL_DELIMITER ((char*)-3)


char * split_the_string(char * string_ptr, char delimiter)
{
    // Set return value pointer and count variable
    char * sec_ptr;
    int count=0;

    // loop through a string
    for ( ; *string_ptr != '\0'; ++string_ptr )
    {
        //if the value equals the delimiter
        if (*string_ptr == delimiter)
        {
            sec_ptr = (string_ptr+1);
            *string_ptr = '\0';
            count++;
        }
    }
    printf("%d\n", count);
    if(count >1){
        return ERROR_ABUNDANT_POINTER;
    }
    else if (delimiter == '\0')
    {
        return ERROR_NULL_DELIMITER;
    }
    else{
        return sec_ptr; 
    }

}
//(sizeof(*string_ptr)/sizeof(string_ptr))

int lab_string()
{

    char my_str[] = "Hey/You/...";
    char * my_sec;
    my_sec = split_the_string(my_str, '/');
    printf("The second string is %s", my_sec);
    return 0;
}


int main(){
    //mem_op();
    //demo_point();
    //demo_small();
    lab_string();
    //printf("test");

    return 0;
}
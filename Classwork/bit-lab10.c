#include <stdio.h>
#include <stdint.h>
/*
        # Lab 10: Bitwise Shift Right

        1. Input a uint32\_t userInput from stdin utilizing fscanf\(\)
        2. Initialize another uint32\_t bitChecker to 0x01
        3. Use a Bitwise Shift Left on bitChecker to ensure only the left most bit is turned on
        4. Print the binary representation of userInput to stdout using only the following:
                1. fprintf\(\)
                2. Bitwise Shift Right >>
                3. Bitwise AND & 
                4. Relational Operator \(e.g., >)

    //#define CHECK_BIT(var,pos) ( (((var) & (pos)) > 0 ) ? (1) : (0) )
    //pos => use 4 for bit position 3 (aka) 2^(3-1) 
    //"pos" is defined as 2^n (i.g. 1,2,4,8,16,32 ...)
*/
int lab_10()
{
    uint32_t userInput;
    fprintf(stdout, "Enter a number: ");
    fscanf(stdin, "%d", &userInput);
    // set bitchecker to 1 and shift 31 to the left ; go until bitcheck is <= 0  ;  shift bitchecker right by 1 each loop
    //THis will shift it all the way to the left =>ensure only the left most bit is turned on
    for (uint32_t bitChecker = 0x01 << 31; bitChecker > 0; bitChecker >>=1){
        fprintf(stdout, "%d", (userInput & bitChecker) > 0 ? "0" : "1");
    }
    return 0;
    /* if (userInput & bitChecker){
        fprintf(stdout, "1");
    }
       else{
           fprintf(stdout, "0");
       }
    */
}

int main(){
    lab_10;
    return 0;
}





















/*

//gcc file.c -lm (links math header)​
//Bin function to calculate 1's and 0's
void binary_func(unsigned n)
{
    //For loop to iterate through binary output
    unsigned i;
    for (i = 1 << 31; i > 0; i >>= 1)
        {
            fprintf(stdout,"%s",(n & i)? "1":"0");
        }
}//Main function
int perry(void){
    //Display and receive input
    printf("Enter number to find binary :");
    uint32_t user_input;
    fscanf(stdin,"%d",&user_input);    //Call on bin function
    binary_func(user_input);
    printf("\n");
    return 0;
}

/*
Charles Hackett
10 Jan 2020
Lab 10: Bitwise Shift Right
Input a uint32_t userInput from stdin utilizing fscanf()
Initialize another uint32_t bitChecker to 0x01
Use a Bitwise Shift Left on bitChecker to ensure only the left most bit is turned on
Print the binary representation of userInput to stdout using only the following:
fprintf()
Bitwise Shift Right >>
Bitwise AND &
Relational Operator (e.g., >)

// Bring in the things
#include <stdio.h>
#include <stdint.h>
// Instantiate the bin converter
int bin(n)
{
    unsigned bitChecker; // make an unsigned variable
    int counts = 0; // declare and set our counter
    for (bitChecker = 1 << 31; bitChecker > 0; bitChecker >>= 1) // iterate through bitchecker 
        {
            fprintf(stdout, "%s", (n & bitChecker)?"1":"0"); // print 1 or 0 based off the bitwise comparison of n and bitChecker
            counts ++; // increment the counter
            if (counts == 4) // if the counter hits 4 print a space and reset it to 0
            {
                printf(" ");
                counts = 0;
            }
        }
}// Instantiate the main
int hackett(void) 
{
    uint32_t num1; // declare num 1 as an unsigned 32 bit integer
    printf("\nEnter a number to be converted:"); // Prompt the user
    fscanf(stdin, "%d", &num1); // use fscanf to read the user input
    bin(num1); // send num1 to the function
    printf("\n");
    return 0;
}


int howard(){
    // Initialize and retrieve userInput
    uint32_t userInput;
    fscanf(stdin, "%d", &userInput);
    // Initialize bitChecker and set the leftmost bit to on and all others to off
    uint32_t bitChecker = 0x01;
    bitChecker = bitChecker << 31;
    // While loop to check each individual bit on userInput against bitChecker using bitwise and
    // Print the results
    while (bitChecker > 0)
    {
        fprintf(stdout, "%d", (userInput & bitChecker) > 0);
        bitChecker = bitChecker >> 1;
    }
}
*/
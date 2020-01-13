#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

/*
### IF STATEMENT

* Initialize a char array to zero.
* Safely store a user-input string in the char array.
* Safely print the string **IF** the following  conditions are both true:
    * The first element greater than or equal to decimal value 32.
    * The first element is less than decimal value 126.

***NOTE: decimal values 32-126 represent printable ASCII characters***
*/
int lab11(){
    char text[256] = {0};
    printf("Enter a string (Max 255 chars): \n");
    fgets(text, sizeof(text), stdin);
    if (text[0] > 31 & text[0] < 126){
        printf("Your string: %s\n", text);
    return 0;
    }
}

/*
### IF-ELSE STATEMENT

    * Initialize a signed int to 0.
    * Input a number from the user and store it in the **signed int**.
    * Determine if the number is negative or positive utilizing a **bitwise** operator.
    * Utilizing an IF-ELSE statement:
        * INDICATE if the number is negative
        * Otherwise, print the original value in binary, and use a **bitwise** operation to flip one bit to make it negative
    * Print the binary
*/

int signed_bin(int number){
    //initalize and set variables (the counter, sizeofint , out mask)
    int i, size, mask; 
    size = sizeof(int);     //
    mask = 1<<(size*8-1);   // mask is like our bitChecker from before

    printf("Bin format of %d:\n", number);
    // size is set to an basic integer and the 8 is how manny nibbles we will print
    for(i=0 ; i<size*8 ;++i ) {
        // this if statement adds the space between nibbles
        if ((i % 4 == 0) && (i != 0))  {
            printf(" ");
        }
        //prints the 1 or 0, by anding with the mask(or bitChecker)
        printf("%u",number&mask ? 1 : 0);

        number = number<<1;
    }
    printf("\n");
    return 0;
}

int lab12(){
    //initalize and get integer from user
    int num = 0;
    printf("Enter a integer: \n");
    scanf("%d", &num);
    //use bitwise to check if negative
    if(num>>31 == -1){ //num>>31 == -1  or num < 0
        printf("The integer (%d) is negative\n", num);
    }
    else
    {
        printf("Positive Integer is :\t%d 0x%X\n", num, num);
        signed_bin(num);
        num = ~num + 1;  //~num + 1  or num* (-1)
        // only flip first bit  //  num |= (0x01 << 31)
        printf("\n");
    }
    signed_bin(num);

}

/*
    # PERFORMANCE LAB 13
    ### ELSE-IF STATEMENT
    #### SWAP THE LARGEST NUMBER
        * Initialize ONLY three unsigned int variables to 0.
        * Safely scan user input into the variable #1 and #2 utilizing a single line.
        * Using a single ELSE-IF statement:
            * If variable #1 is equal to variable #2, print an ERROR.
            * Otherwise, exchange the value of the largest variable with variable #3 while preserving the other value.
        * Print the values of all three variables if the SUM of the three variables is greater than 2 regardless of the previous  ELSE-IF statement.

*/
int swap_var(int large, int new){
    large = large ^ new;                      // x = 1111 1111 == (x)0000 0001 ^ (y)1111 1110
    new = large ^ new;                      // y = 0000 0001 == (x)1111 1111 ^ (y)1111 1110
    large = large ^ new;                      // x = 1111 1110 == 1111 1111 ^ 0000 0001
    return large, new;
}

int lab13(){
    unsigned int number1 = 0, number2 = 0, number3 = 0;
    printf("Enter two integers: ");
    scanf("%u %u", &number1, &number2);
    //checks if the two integers are equal.
    if(number1 == number2){
        printf("Error: %u = %u",number1,number2);
    }
    //checks if number1 is greater than number2.
    else if (number1 > number2){
        number3 = number1;
    }
    //checks if both test expressions are false // number2 is greater than number1
    else{
        number3 = number2;
    }
    //Print the values of all three variables if the SUM of the three variables is greater than 2
    if ((number1+number2+number3) > 2){
        printf("1st Number: %u\n2nd Number: %u\n3rd Largest: %u\n", number1, number2, number3);
    }
    return 0;
 }

int lab14(){
    /* 
    # PERFORMANCE LAB 14
    ### SWITCH STATEMENT
        * Write a program that will evaluate a simple math formula.
        * Input the formula with two integers separated by an arithmetic operator from one line.
            * Example: 1 + 1, (-8) - 3, 2 * (-7), (-15) / (-4)
        * Use a switch statement to print the correct value using the operators as *cases*.
        * Set the default condition to an error.
        * Ensure any division provides a *double* answer with a precision of two decimal places.

        ***NOTE: Scan the arithmetic operator as a char***
        }
    */
    char operator;
    int n1, n2;
    printf("two integers separated by an arithmetic operators(+, -, *, /): ");
    scanf("%d %c %d",&n1, &operator, &n2);
    switch(operator)
    {
        case '+':
            printf("%d + %d = %d",n1, n2, n1+n2);
            break;
        case '-':
            printf("%d - %d = %d",n1, n2, n1-n2);
            break;
        case '*':
            printf("%d * %d = %d",n1, n2, n1*n2);
            break;
        case '/':
            printf("%d / %d = %.2lf",n1, n2, (double)n1/n2);
            break;
        case '%':
            printf("%d %% %d = %d",n1, n2, n1%n2);
            break;
        // operator doesn't match any case constant +, -, *, /
        default:
            printf("Error! Operator must be +, -, *, /");
    }
    return 0;
}

int lab15(){
    /*
    # PERFORMANCE LAB 15
    ### FOR LOOP: OCCUPANDI TEMPORIS

        Following demo lab 1 for 7.3, you should have identified your past code/programs where a for loop would have been more economical. Well NOW is your chance. Create a C file where your previous code is commented out and directly underneath, you implement a for loop.
    */
    return 0;
}

int lab16(){
    /*
    # PERFORMANCE LAB 16
    ### WHILE LOOP
        * Initialize a **NUL** terminated char array with multiple phrases separated by newlines (\n).
        * Test the char array with puts().
        * Write a WHILE loop that only prints the first line **AND** stops at a **NUL** character
    */
    int i = 0;
    char test[] = "my many phrases \nsecond line \nthird line \0";
    printf("Print with puts: \n");
    puts(test);
    printf("print with while: \n");
    while (test[i]!= '\n' & test[i] != '\0') {
        printf("%c", test[i]);
        i++;
    }
    return 0;
}
#include <ctype.h>   //for toupper()

int lab17(){
    /*
    # PERFORMANCE LAB 17
    ### DO-WHILE LOOP
        * Initialize a 26 element *int* array to 0.
        * Initialize a *char* variable to 0.
        * Use a DO-WHILE loop to input, *but not store*, a string one character at a time from stdin **without** scanf()!!
        * Each time a character is entered:
            * convert the character to upper case using *toupper()*
            * increment the corresponding array element if the user input is a letter
            * Ensure non-letters (i.e. Ctrl-D, tab) are safely handled
        * End the loop when a *newline* is read.
        * Print the results using a for loop ()
    */
    int array[26]= {0};
    int i = 0;
    char var = 0;
    printf("Enter char (newline[X2] to escape): \n");
    do {
        var = getchar();
        if (var >= 96 & var < 123){
            array[i] = (int)toupper(var);
        }
        else{
            array[i] = (int)var;
        }
        i++;
        while (getchar() != '\n');  // this line 'clears; the cache, since you hit enter after each input.
    } while (var != '\n');
    for(i = 0; i<26; i++){
        printf("%c", (char)array[i]);
    }
    printf("\n");
    return 0;
}

int lab18(){
    /*
    # PERFORMANCE LAB 18
    ### CONTINUE
        * Input an unsigned integer "x".
        * Print the first 10 to 20 positive integers that x is divisible by utilizing the **mod** operator (not the most efficient)
        * Repeat this process.
        * Immediately stop this process when the user inputs an integer above 999.
        * Ignore any "divide by 0" errors using *continue*.
    */
    return 0;
}

int lab19(){
    /*
    # PERFORMANCE LAB 19
    ### NESTED CONTROL FLOW
        * Print all the even or odd numbers from 0 to 100.
        * Prompt the user for input to indicate odds or evens.
        * Loop from 0 to 100 and print all indicated numbers.
        * Use and IF statement to check if *even* or *odd*.

    #### BONUS:
        * Ask the user to continue with a DO-WHILE loop
        * write a version with the counting loop written as a FOR loop, and a WHILE loop version.
    */
    return 0;
}

int main(){
    //lab11();
    //lab12();
    //lab13();
    lab14();
    //lab16();
    //lab17();
}


#include <stdio.h>
//int getchar(void);
//return ascci value from std in

// not pos or neg value

int get_put(){
    int userInput = 0;                    // Will store input
    printf("Enter a Char: ");        // Prompts user
    userInput = getchar();                // Stores user input into userInput

    printf("your char was: ");   // Prefaces output
    putchar(userInput);               // Prints output
    printf("\n%d\n", (int)userInput);
    return 0;
}

/*
1. Input a single character and then print the next sequential character
2. Use getchar() and putchar()
3. Test it with the following input:
        - 7
        - H
        - 1337
        - abc
        - Ctrl-D
        - \
        - -1
        - <Space>
        - ~
        - 1234567890
HINT:
putchar(yourVar + 1);
*/

int get_put_lab()
{
    int userInput = 0;                    // Will store input
    printf("Enter a Char: ");        // Prompts user
    userInput = getchar();                // Stores user input into userInput

    printf("The next char is: ");   // Prefaces output
    putchar(userInput+1);               // Prints output
    printf("\n%d => %d \n", (int)userInput, (int)userInput+1);
    return 0;
}

int get_c()
{
    int userInput = 0;                // Will store input
    printf("Enter a character: ");    // Prompts user
    userInput = getc(stdin);          // Stores stream input
    printf("Your character was: ");  // Prefaces output
    putc(userInput, stdout);          // Writes to stdout
    printf("\n%d\n", (int)userInput);
    return 0;
}

/*
1. Input a single character and then print the previous sequential character
2. Use getc() and putc()
3. Test it with the following input:
        - 7a
        - H
        - 1337
        - abc
        - Ctrl-D
        - <Enter>
        - \
        - -1
        - <Space>
        - ~
        - 1234567890
        - <Tab>
HINT:
    putc(yourVar - 1, stdout);
*/

int get_c_lab()
{
    int userInput = 0;                    // Will store input
    printf("Enter a Char: ");        // Prompts user
    userInput = getc(stdin);          // Stores stream input

    printf("This previous char: ");   // Prefaces output
    putc(userInput-1, stdout);          // Writes to stdout
    printf("\n%d => %d \n", (int)userInput, (int)userInput-1);
    return 0;
}
/*
Discuss the output of...
        Enter a string: 123
        Enter a string: abcd
        Enter a string: 31398
        Enter a string: Superman

            Enter string: Superman
            Your string was: Sup
*/


int f_gets_demo()
{
    char buff[4];                        // Will store string
    printf("Enter string: ");            // Prompts user
    fgets(buff, sizeof(buff), stdin);    // Stores user string
    printf("Your string was: ");         // Prefaces output
    puts(buff);                          // Writes to stdout
}

// a buffer of 4 = 3 character due to the '/0' at the end of the string

int f_gets_demo2()
{
    char buff[4];                        // Will store string
    printf("Enter a string: ");          // Prompts user string
    fgets(buff, sizeof(buff), stdin);    // Stores user string
    printf("Your string was: ");         // Prefaces output
    fputs(buff, stdout);                 // Writes to stdout
    //puts(buff) == fputs(buff, stdout)
    return 0;
}

/*
1. Read a string from stdin into a char array of dimension 10
2. Write that string to stdout
3. Use fgets() and fputs()
4. Test it with the following input:
        - Program
        - Class rules            =>     Class rul
        - <Enter>
        - 1<tab>2<space>3456789   =>    1      2 34567
        - |$(5)$|
        - ~\_<Ctrl-D>_/~
    Enter a string: ~\_^D_/~
    Your string was: ~\__/~

    Enter a string: ^D123456^D789
    Your string was: 1234567
*/

int f_gets_lab()
{
    char buff[10];                        // Will store string
    printf("Enter a string: ");          // Prompts user string
    fgets(buff, sizeof(buff), stdin);    // Stores user string
    printf("Your string was: ");         // Prefaces output
    fputs(buff, stdout);                 // Writes to stdout
    return 0; 
}
/*
Conversion Characters:
    Specifier	Argument Type	Output Format
    d, i	    int	            Decimal
    f	        float/double	Floating-point number, decimal
    c	        char/int	    Single character
    s	        string	        nul-terminated string
    p	        pointer	        Address, hexadecimal
    %	        none	        the character %
    x	        unsigned int	Hexadecimal with a,b,c,d,e,f
    X	        unsigned int	Hexadecimal with A, B, C, D, E, F

*/



int main(){
    //get_put();
    //get_put_lab();
    //get_c();
    //get_c_lab();
    //f_gets_demo();
    //f_gets_demo2();
    //f_gets_lab();
    formatting_demo();
}


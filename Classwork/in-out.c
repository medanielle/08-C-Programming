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
####################################################################################################################################
int precision_printf()
{
    char questionMark = 63;                  // A question mark
    char *nickName[] = {"Gilligan\0"};      // A nickname

    printf("Who is %s%c \n", *nickName, questionMark);      //Who is Gilligan?
    printf("%s is. \n", *nickName);                         //Gilligan is.

    float someNum = 12.3456;                    // Var used as comparison

//Precision (Numeric): %[flags][field width][.precision]specifier
    printf("%f", someNum);                      // 12.345600
    printf("%.0f", someNum);                    // 12
    printf("%.2f", someNum);                    // 12.35
    printf("%.3f", someNum);                    // 12.346
    printf("%.6f", someNum);                    // 12.345600
    printf("%.20f", someNum);                   // 12.34560012817382800000*
    //* Your specific output my differ considering printf has exceeded the bounds of your float and is printing garbage

//(Precision)Strings:  %[flags][field width][.precision]specifier

    char myStr[] = {"Hello world!"};            // dimension 13 and is nul-terminated

    printf("%s", myStr);                        // Hello world!
    printf("%.12s", myStr);                     // Hello world!
    printf("%.11s", myStr);                     // Hello world
    printf("%.5s", myStr);                      // Hello
    printf("%.0s", myStr);                      //
    printf("%.1000s", myStr);                   // Hello world!
    return 0;
}
int field_width()
{
    //Field Width :%[flags][field width][.precision]specifier

    float someNum = 12.3456;                    // Var used as comparison

    printf("%f", someNum);                     // 12.345600
    printf("%0f", someNum);                    // 12.345600
    printf("%2f", someNum);                    // 12.345600
    printf("%4f", someNum);                    // 12.346000
    printf("%8f", someNum);                    // 12.345600
    printf("%16f", someNum);                   //         12.345600                (8 positions)
    printf("%25f", someNum);                   //                  12.345600       (17 positions)

    char myStr[] = {"Hello world!"};            // Nul terminated string

    printf("%s", myStr);                        // Hello world!
    printf("%0s", myStr);                       // Hello world!
    printf("%2s", myStr);                       // Hello world!
    printf("%4s", myStr);                       // Hello world!
    printf("%8s", myStr);                       // Hello world!
    printf("%16s", myStr);                      //      Hello World!            (5 positions)
    printf("%26s", myStr);                      //                Hello world!  (15 positions)
    return 0;
}

int flags_printf()
{
    //Flags: %[flags][field width][.precision]specifier
    /*
        Flags consist of one or more of the following characters:
        +               Prefixed to positive numbers
        ' ' (space)     Prefixed to positive numbers
        _               Output is left-justified within field width
        0               Field is filled with leading zeros
        #               Alternate conversion rules
    */
    float someNum = 12.3456;                    // Var used as comparison

    printf("%f", someNum);                     // 12.345600
    printf("%f", someNum * -1.0);              // -12.345600
    printf("%+f", someNum);                    // +12.345600
    printf("%+f", someNum * -1.0);             // -12.346000
    printf("% f", someNum);                    //  12.345600
    printf("% f", someNum * -1.0);             // -12.345600    
    printf("%-f", someNum);                    // 12.345600  
    printf("%-f", someNum * -1.0);             // -12.345600  
    printf("%0f", someNum);                    // 12.345600  
    printf("%016f", someNum);                  // 000000012.345600
    return 0;
}

int formatting_demo()
{
    //////////////////////////////////////
    //// WRITE OUT THE EXPECTED OUTPUT////
    //////////////////////////////////////

    printf("%f", 1.2);                              // 1.200000
    printf("%+8.4f", -1.798);                       //  -1.7980
    printf("% 7.2f", 0.987654321);                  //    0.98
                                                    //       0.99
    printf("%-6.1f is yours", 13.37);               // 0013.3 is yours
                                                    //    13.4   is yours
    printf("Yours is %05.2f", 1.2345);              // Yours is 01.23
    printf("%s", "Hello World!\0");                 // Hello World!
    printf("%9.5s", "Hello world!\0");              // 0000Hello
                                                    //     Hello
    printf("%016.11s", "Hello world!\0");           // 00000Hello world
    return 0;

}

int scanf_demo()
{
    /*
    Formatted I/O
    Formatted Input (Strings)

    1. Read a string into a char array
    2. Specify a field-width to protect against buffer overflow
    3. Ensure the field-width leaves room for the nul-terminator
    4. Stop reading at the first capital letter or new line
    */
   return 0;
}

int examples_scanf()
{
    ///// INITIALIZATION /////
    int num = 0;
    char letter = 0;

    ///// SCANF STATEMENT /////
    scanf("%d%c", &num, &letter);

    // %d%c  |  is the format
    // &num, &letter  |  are the arguments
    // &num == %d
    // &letter == %c
        
        //NOTE: Be aware that characters may be left behind in stdin

    ////////// INITIALIZATION //////////
    int hours = 0;
    int minutes = 0;
    int seconds = 0;

    ////////// SCANF STATEMENTS //////////
    scanf("%d%*c%d%*c%d", &hours, &minutes, &seconds);

    // First %d == &hours
    // Second %d == &minutes
    // Third %d == &seconds
    
    //NOTE: The %*c conversion specification tells scanf to read char(s) in between integers but doesn't assign it to a variable.
/*
    Syntax Examples:
    /////////////////////////////////////////
    /////////// SCANF STATEMENTS ////////////
    /////////////////////////////////////////

    scanf(“%d,%d”, &num1, &num2);    // Uses comma as delimiter
    scanf(“%3f”, &GPA);              // Only takes three inputs e.g., 3.4
    scanf(“*%lf”, &posSqrtTwo);      // Waits for asterisk before reading
    scanf(“%[abcd]c”, &ansNum1);     // Will only read an a, b, c, or d
    scanf(“%[A-Z]c”, &capsChar);     // Will only read a capital letter
    scanf(“%[A-z]c”, &rngOfChar);    // Only chars of decimal value 65–122
    scanf(“%32[01]s”, binaryStr);    // Stops reading at first non 0 or 1 
    scanf(“%64[^e\n]s”, Gadsby);     // Stops reading at first e or newline
*/
}


int scanf_demo4()
{
    /*
    Formatted I/O
    Formatted Input (Strings)

    1. Read a string into a char array
    2. Specify a field-width to protect against buffer overflow
    3. Ensure the field-width leaves room for the nul-terminator
    4. Stop reading at the first capital letter or new line
    */
   return 0;
}

int scanf_demo5()
{
    /*
    Formatted I/O (scanf)
    Formatted Input (Numbers)

    1. Read three ints, representing the date, from one line
    2. Format the input so the integers are separated by a dash (-) as <mm>-<dd>-<yyyy>
    3. Output the results as a date with leading zeros <mm>/<dd>/<yyyy>
    4. Specify the field width of the output appropriately
    */
    return 0;
}

int scanf_lab8()
{
    /*
    Part 1
    Formatted Input (strings)
        1. Read a first, middle and last name as input into separate char arrays
        2. Specify a field-width to protect against buffer overflow
        3. Ensure the field-width leaves room for a nul-terminator
        4. Specify a ("\t") as a delimitating character
        5. Print the full name, separating each string with a tab and newline ("\t\n")

        ////////////// EXAMPLE #1 ///////////////
        OUTPUT:  Enter two integers, separated by a *, to be multiplied…
        INPUT:   2*3
        OUTPUT:  The result of 2 multiplied by 3 is 6. 
    Part 2
    Formatted Input (numbers)
        1. Read two integers from one line
        2. Format the input so that the integers are separated by an asterisk (*) x*y (e.g., 2*3, 11*14)
        3. Reprint the two integers and result as if the answer were being read by a human
 
        ////////////// EXAMPLE #2 ///////////////
        OUTPUT:  Enter two integers, separated by a *, to be multiplied…
        INPUT:   11*14
        OUTPUT:  The result of 11 multiplied by 14 is 154.
        */
}
int main(){
    //get_put();
    //get_put_lab();
    //get_c();
    //get_c_lab();
    //f_gets_demo();
    //f_gets_demo2();
    //f_gets_lab();
    //formatting_demo();
    examples_scanf();
}


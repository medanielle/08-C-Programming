#include <stdio.h>

int examples_scanf()
{
    ///// INITIALIZATION /////
    int num = 0;
    char letter = 0;

    ///// SCANF STATEMENT /////

    printf("1 digit, 1 char\n");
    scanf("%d%c", &num, &letter);
    printf("%d %c\n", num, letter);

    //NOTE: Be aware that characters may be left behind in stdin

    ////////// INITIALIZATION //////////
    int hours = 0;
    int minutes = 0;
    int seconds = 0;

    ////////// SCANF STATEMENTS %*c//////////
    printf("hours /anychar(s)/ mins /anychar(s)/ seconds\n");
    scanf("%d%*c%d%*c%d", &hours, &minutes, &seconds);
    printf("1st: %d 2nd: %d 3rd: %d\n", hours, minutes, seconds);

    // First %d == &hours
    // Second %d == &minutes
    // Third %d == &seconds
    
    //NOTE: The %*c conversion specification tells scanf to read char(s) in between integers but doesn't assign it to a variable.
    return 0;
}
int scan_state()
{
    /////////////////////////////////////////
    /////////// SCANF STATEMENTS ////////////
    /////////////////////////////////////////

    int num1, num2;
    float GPA;
    double posSqrtTwo;
/*
    printf("digit /comma/ digit: \n");
    scanf("%d,%d", &num1, &num2);    // Uses comma as delimiter
    printf("3 digit float: \n");
    scanf("%3f", &GPA);              // Only takes three inputs e.g., 3.4
    printf("Double (starts after*): \n");
    scanf("*%lf", &posSqrtTwo);      // Waits for asterisk before reading
    printf("Digit: %d, Digit: %d \nGPA(3): %3f \nDouble(*): %lf\n", num1, num2, GPA, posSqrtTwo);

    char ansNum1, capsChar, rngOfChar;
    printf("Char (only accepts a, b, c, or d): \n");
    //scanf("%[abcd]c", &ansNum1);     // Will only read an a, b, c, or d
    printf("Char (Only capital letters): \n");
    //scanf("%[A-Z]c", &capsChar);     // Will only read a capital letter
    printf("char (only decimal 65-122): \n");
    //scanf("%[A-z]c", &rngOfChar);    // Only chars of decimal value 65–122
    printf("Multiple Choice: %c \nCapital Letter: %c \nAlpha: %c", ansNum1, capsChar, rngOfChar);
*/
    char binaryStr[] = {0}, Gadsby[] = {0};
    printf("string (stops if not 0 or 1): \n");
    //scanf("%32[01]s", binaryStr);    // Stops reading at first non 0 or 1 
    printf("String (stops at first e or newline): \n");
    scanf("%64[^e\n]s", Gadsby);     // Stops reading at first e or newline
    printf("Binary String: %s \nString (no e, /n): %s\n", binaryStr, Gadsby);

    return 0;
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
    char array[16] = {0};

    printf("Enter 15 chars (Stop reading at the first capital letter or new line): \n");
    scanf("%15[^A-Z\n]s\n", &array);
    printf("Entered: %s\n", array);

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

 
    
        ////////// INITIALIZATION //////////
    int months = 0;
    int days = 0;
    int years = 0;

    ////////// SCANF STATEMENTS %*c//////////
    printf("Enter Date (mm-dd-yyyy):  \n"); 
    scanf("%d%*c%d%*c%d\n", &months, &days, &years);
    printf("%02d/%02d/%04d\n", months, days, years);
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

    */
    char first[50] ={0}, middle[50] ={0}, last[50] ={0};
    printf("Enter first [tab] middle [tab] Last: \n");
    scanf("%49s%*[\t]%49s%*[\t]%49s\n", &first, &middle, &last);
    printf("First: %s\t\nMiddle: %s\t\nLast: %s\t\n", first, middle, last);


   return 0;
}

int lab8_part2()
{
    /*
    Part 2
    Formatted Input (numbers)
        1. Read two integers from one line
        2. Format the input so that the integers are separated by an asterisk (*) x*y (e.g., 2*3, 11*14)
        3. Reprint the two integers and result as if the answer were being read by a human

    ////////////// EXAMPLE #1 ///////////////
        OUTPUT:  Enter two integers, separated by a *, to be multiplied…
        INPUT:   2*3
        OUTPUT:  The result of 2 multiplied by 3 is 6. 
    ////////////// EXAMPLE #2 ///////////////
        OUTPUT:  Enter two integers, separated by a *, to be multiplied…
        INPUT:   11*14
        OUTPUT:  The result of 11 multiplied by 14 is 154.
    */

    int num1, num2;
    printf("Enter two integers, separated by a *, to be multiplied: \n");
    scanf("%d%*[*]%d\n", &num1, &num2);
    printf("The result of %d multiplied by %d is %d\n", num1, num2, num1*num2);
    return 0;
}

int main()
{
    fseek(stdin, 0, SEEK_END);
    //examples_scanf();
    //scan_state();
    //scanf_demo4();
    //scanf_demo5();
    //scanf_lab8();
    lab8_part2();
    return 0;
}
//////////////////////////////// HOWARD ////////////////////////////////
/*
    Author: Mark Howard
    2020-Jan-08
    Performance Lab 8
*/

void demoLab4()
{
    // Read a string into a char array
    // Specify a field-width to protect against buffer overflow
    // Ensure the field-width leaves room for the nul-terminator
    // Stop reading at the first capital letter or new line
    char myString[20] = {0};
    printf("Enter your string\n");
    scanf("%19[^A-Z\n]s", &myString);
    printf(myString);
}

void demoLab5()
{
    // Read three ints, representing the date, from one line
    // Format the input so the integers are separated by a dash (-) as <mm>-<dd>-<yyyy>
    // Output the results as a date with leading zeros <mm>/<dd>/<yyyy>
    // Specify the field width of the output appropriately
    int day, month, year;
    printf("Enter your date\n");
    scanf("%d%*c%d%*c%d", &month, &day, &year);
    printf("%02d/%02d/%04d", month, day, year);
}

void perfLab()
{
    // Read a first, middle and last name as input into separate char arrays
    // Specify a field-width to protect against buffer overflow
    // Ensure the field-width leaves room for a nul-terminator
    // Specify a ("\t") as a delimitating character
    // Print the full name, separating each string with a tab and newline ("\t\n")
    char firstName[20] = {0};
    char middleName[20] = {0};
    char lastName[20] = {0};

    printf("Enter your full name in the following format: First<tab>Middle<tab>Last\n");
    scanf("%19s%*c%19s%*c%19s", &firstName, &middleName, &lastName);
    printf("%s\t\n%s\t\n%s\t\n", firstName, middleName, lastName);
    
    // Read two integers from one line
    // Format the input so that the integers are separated by an asterisk (*) x*y (e.g., 2*3, 11*14)
    // Reprint the two integers and result as if the answer were being read by a human
    int num1, num2;

    printf("Enter two numbers separated by *\n");
    scanf("%d%*c%d", &num1, &num2);
    printf("The result of %d multiplied by %d is %d.", num1, num2, num1*num2);
}

void howard()
{
    // Call the functions
    printf("Demo Lab 4\n");
    demoLab4();
    // Due to the first function potentially leaving extra stuff in stdin, call fseek
    // Fseek sets the pointer of the file (stdin) to a specified point
    // In this case, the end of the file, offset by 0
    // This way, future scanf calls will get new data instead of what was left earlier
    fseek(stdin,0,SEEK_END);
    // Continue calling the functions
    printf("\nDemo Lab 5\n");
    demoLab5();
    printf("\nPerformance Lab 8\n");
    perfLab();
}
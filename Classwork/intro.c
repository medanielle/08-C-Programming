#include <stdio.h>
#include <stdlib.h>

void hello(void){
    printf("\nHello\n\n");
}

void data_types(void){
    int integer = 1;
    float singleFloat = 3.14159265359;
    double doubleFloat = 3.14159265359;
    char singleChar = '$';
    char singleChar2 = 33;  // 33 = !, so ! will be displayed
    char string[] = "My Word";

    printf("\nint = %d \nfloat = %.6f \ndouble = %.11f \n1st char = %c \n2nd char = %c \nstring = %s \n", 
    integer, singleFloat, doubleFloat, singleChar, singleChar2, string);
}

// removed int argc, char **argv)

int averages(void){

    int a, b, c;

    printf("enter the first num: ");
    scanf("%d", &a);

    printf("enter the second num: ");
    scanf("%d", &b);

    printf("enter the third num: ");
    scanf("%d", &c);

    double avg = (a + b + c)/3.0;
    printf("The avg of %d, %d, and %d is %f\n", a, b, c, avg);

    return 0;
}
/* OUTPUT
    osboxes@osboxes:~/Documents$ ./a.out
    enter the first num: 1
    enter the second num: 2
    enter the third num: 3
    The avg of 1, 2, and 3 is 2.000000
    osboxes@osboxes:~/Documents$ ./a.out
    enter the first num: 5
    enter the second num: 7
    enter the third num: 11
    The avg of 5, 7, and 11 is 7.666667
*/

#include <math.h>

int pythag(void){

    double a, b, h;

    printf("enter the first side: ");
    scanf("%lf", &a);

    printf("enter the second side: ");
    scanf("%lf", &b);

    h = sqrt(a*a + b*b);

    printf("The lenght of hypotenuse %.2f\n", h);


    return 0;
}

// gcc pyth.c -lm
#include <math.h>
// %n.mf   WTFWTFWTFTWTFWTFTWTFTWTFTWTFTWTF WHO THE FUCK KNOWS

int mileage(void)
{
    double startMileage, endMileage, ratePerMile;

    printf("Enter the starting Odometer: ");
    scanf("%lf", &startMileage);

    printf("Enter the ending Odometer: ");
    scanf("%lf", &endMileage);

    printf("Enter the rate per mile: ");
    scanf("%lf", &ratePerMile);

    double totalMiles = endMileage - startMileage;
    double reimburse = totalMiles * ratePerMile;
    reimburse = round(reimburse * 100)/ 100;

    printf("You drove %.1f miles at $%.2f per mile, you are owed $%.2f\n", totalMiles, ratePerMile, reimburse);

    return 0;
}


#include <stdio.h>

int size_ex(void)
{
    int integer = 1;
    float singlePrecision = 2.2;
    double doublePrecision = 3.3;
    char singleChar = '$';
    char singleChar2 = 33;
    char string[] = "My Word";

    // Just a "My Word"  => Output =>  size of string is 8 
    //"My Word is Super Duper LOng?"  => Output =>  size of string is 29 
    printf("your integer is %d \n", integer);
    printf("size of int is %d \n", sizeof(integer));
    printf("your float is %f \n", singlePrecision);
    printf("size of float is %d \n", sizeof(singlePrecision));
    printf("your double is %lf \n", doublePrecision);
    printf("size of double is %d \n", sizeof(doublePrecision));
    printf("your first char is %c \n", singleChar);
    printf("size of char 1 is %d \n", sizeof(singleChar));
    printf("your second char is %c \n", singleChar2);
    printf("size of char 2 is %d \n", sizeof(singleChar2));
    printf("your string is %s \n", string);
    printf("size of string is %d \n", sizeof(string));

    return 0;
}
/*
    * Is there a size difference between **singleChar** and **singleChar2**
    * 
    *       ---Nope
    * 
    * Why did we change all format specifiers to %d
    * 
    *       -- because the output of sizeof is an integer
*/


int declare() {
    /********** VARIABLE DECLARATION **********/
    /* Syntax: <DATA TYPE> <VARIABLE NAME>; */

    /******** VARIABLE INITIALIZATION ********/

    /* initialization syntax...
    <DATA TYPE> <VARIABLE NAME> = <INITAL VALUE>; */

    int lowerLimit = -10;    // lowest y value for graph
    int upperLimit= 10;    // highest y value for graph
    float x = 1.0, y=2.1;        // graphing function variables

    // used to hold a person's individual initials
    char firstInitial = 'J', middleInitial = 'G', lastInitial = 'V';
    double pi = 3.14159265359;        // stores the constant "pi"
    //finalResult = 0;    // placeholder 0. to be changed later.

    return 0;
}


int lab1(){

    /* this program does nothing but declare/intialize some variables,
    * then it prints them, and their sizzes to screen
    *
    *  name: hughett
    *  date: 6 Jan 20
    *  project: lab1
    *
    */

    //declare and intialize the int, char, float, and double data types (<DATA TYPE> <VARIABLE NAME> = <INITAL VALUE>;)
    int integer = 1;
    float singlePrecision = 2.2;
    double doublePrecision = 3.3;
    char singleChar = '$';
    // the number 33 will translate to '!' in ASCII
    char singleChar2 = 33;

    // integer is printed and the size is set at 4
    printf("your integer is %d \n", integer);
    printf("size of int is %d \n", sizeof(integer));
    // float is printed and the size is set at 4
    printf("your float is %f \n", singlePrecision);
    printf("size of float is %d \n", sizeof(singlePrecision));
    // double is printed and the size is set at 8
    printf("your double is %lf \n", doublePrecision);
    printf("size of double is %d \n", sizeof(doublePrecision));
    // char is printed the size is always 1
    printf("your first char is %c \n", singleChar);
    printf("size of char 1 is %d \n", sizeof(singleChar));
    // same as above
    printf("your second char is %c \n", singleChar2);
    printf("size of char 2 is %d \n", sizeof(singleChar2));

    //off topic, just trying on a string
    char string[] = "My Word";
    printf("your string is %s \n", string);
    printf("size of string is %d \n", sizeof(string));

    return 0;
}

int hw1(){
    int num, years, weeks, days;

    printf("Enter number of days: ");
    scanf("%d", num);

    years = num/365;
    num = num - (years*365);
    weeks = num/7;
    days = num - (weeks * 7);

    printf("%d years, %d weeks, %d days", years, weeks, days);
    return 0;
}

int main()
{
    //hello();
    //data_types();
    //averages();
    //pythag();
    //mileage();
    //size_ex();
    //declare();
    //lab1();
    hw1();
    return 0;
}

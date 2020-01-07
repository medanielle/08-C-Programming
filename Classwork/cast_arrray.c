#include <stdio.h>
#include <stdlib.h>

int casting(){
    //declare and intialize the int, char, float, and double data types (<DATA TYPE> <VARIABLE NAME> = <INITAL VALUE>;)
    int integer = 36;
    float singleFloat = 2.22222;
    double doubleFloat = 3.3333333333;
    char singleChar = '$';
    // the number 33 will translate to '!' in ASCII
    char singleChar2 = 33;

    printf("\nint = %d \t=>\t float = %.6f\n", integer, (float)integer);
    printf("\nint = %d \t=>\t char = %c\n", integer, (char)integer);
    printf("\nchar = %c \t=>\t int = %d \n", singleChar, (int)singleChar);
    printf("\nfloat = %.6f \t=>\t double = %.11f \n", singleFloat, (double)singleFloat);
    printf("\ndouble = %.11f \t=>\t float = %.6f \n", doubleFloat, (float)doubleFloat);
    printf("\nint = %d \t=>\t char = %c\n", 33, (char)33);

}

int main()
{
    //casting();
    return 0;
}
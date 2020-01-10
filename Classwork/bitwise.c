#include <stdio.h>
#include <stdlib.h>

/*
Review 1
System      	Original Value  	Decimal Value
Hexadecimal 	0xBAD               (b[11]*256)+(A[10]*16)+(D[13]*1) = 2816+160+13 = 2989
Hexadecimal 	0xBEEF       (B[11]*4096)+(E[14]*256)+(E[14]*16)(F[15]*1) = 45,056‬+3,584+224+15 = 48,879‬
Octal       	455                 	(4*64)+(5*8)+(5*1) = 256+40+5 = 301
Octal       	347                 	(3*64)+(4*8)+(7*1) = 192+32+7 = 231
Binary      	0010 1111           	128(0)+64(0)+32(1)+16(0)|8(1)+4(1)+2(1)+1(1) = 32+8+4+2+1 = 47
Binary      	0100 0110           	128(0)+64(1)+32(0)+16(0)|8(0)+4(1)+2(1)+1(0) = 64+4+2 = 70
*/

/*
Hexadecimal is useful for representing binary data. Each hexadecimal digit represents 4 binary bits.
Hexadecimal 	Binary Conversion
                D(13)  E(14)  A(10)  D(13)  C(12)  0(0)   D(13)  E(14)
0xDEADC0DE  	????   ????   ????   ????   ????   ????   ????   ????
                1101   1110   1010   1101   1100   0000   1101   1110
              
                E(14)  0(0)   1(1)   1(1)   C(12)  F(15)  D(13)  0(0)
0xE011CFD0  	????   ????   ????   ????   ????   ????   ????   ????
                1110   0000   0001   0001   1100   1111   1101   0000
              
                F(15)  A(10)  C(12)  E(14)  B(11)  0(0)   0(0)   C(12)
0xFACEB00C  	????   ????   ????   ????   ????   ????   ????   ????
                1111   1010   1100   1110   1011   0000   0000   1100

                F(15)  E(14)  E(14)  1(1)   D(13)  E(14)  A(10)  D(13)
0xFEE1DEAD  	????   ????   ????   ????   ????   ????   ????   ????
                1111   1110   1110   0001   1101   1110   1010   1101

Review 3
Binary                                  	Hexadecimal
1101    1110    1010    1101    1101    0000    0000    1101 	0xDEADD00D
8+4+1   8+4+2   8+2     8+4+1   8+4+1   0       0       8+4+1
13 =D   14 = E  10 = A  13= D   13= D   0       0       13 = D

1100    0000    0000    0000    0001    0000    1111    1111 	0xC000l0FF
8+4=    0       0       0       1       0     8+4+2+1=  8+4+2+1=
12 = C  0       0       0       1       0       15 = F  15 = F

1011    0001    0000    0101    1111    0000    0000    1101 	0xB105F00D
8+2+1   1       0       4+1     8+4+2+1  0      0       8+4+1   
11 = B  1       0       5       15 = F   0      0       13 = D
    
1101    1110    1010    1101    0001    0000    1100    1100 	0xDEAD10CC
8+4+1   8+4+2   8+2     8+4+1   1       0       8+4     8+4
13 = D  14 = E  10 = A  13 = D  1       0       12 = C  12 = C

*/

/*


// Bitwise XOR
x ^ y         // 1, if 1 in either x or y, but not both

// Bitwise NOT
~x            // 1, if 0 in x

// Shift Left
x << y        // Each bit in x is shifted y positions left

// Shift Right
x >> y        // Each bit in x is shifted y positions right
*/
/*
Bitwise AND Pop Quiz 1
Answer the question marks:
1001 = ?        1001 = 8+1 = 9
0011 = ?        0011 = 2+1 = 3
????        (1&0)0 (0&0)0 (0&1)0 (1&1)1
                0001



Bitwise OR Pop Quiz 2
Answer the following question marks
0010 = ?        0010 = 2
1110 = ?        1110 = 15
????          (0|1)1(0|1)1(1|1)1(0|0)0
                1110

Bitwise XOR Pop Quiz 3
Answer the following question marks
0010 = ?        1010 = 10
1110 = ?        0011 = 3
????          (1|0)1(0|0)0(1|1)0(0|1)1
                1001  = 9
*/

#include <stdint.h>
//Note: typedefs (Exact-width integer type, ie uint16_t) are defined in <stdint.h>

void bit_and()

{
    /*
    // Bitwise AND
    x & y         // 1 if 1 in both x and y 
    0&0 = 0; 0&1 = 0; 1&1 = 1;
    3 & 6           3 => 0011
                    6 => 0110
                        0010 = 2
    */
    int a,b,c;
    printf("Read The Integers from keyboard (a & b) :-");
    scanf("%d %d", &a,&b);
    c=a & b;
    printf("The Answer after ANDing is (C)= %d",c);

}

int bit_OR()
{
    /*
            // Bitwise OR
        x | y         // 1 if 1 in either x or y, or both

        0|0 = 0; 0|1 = 1; 1|1 = 1;
        3 & 6           3 => 0011
                        6 => 0110
                             0111 = 7
    */
    /*
    {
    int a,b,c;
    //clrscr();
    printf("Read The Integer from keyboard (a & b) :-");
    scanf("%d %d", &a,&b);
    c=a | b;
    printf("The Oring operation bewteen a & b in c = %d",c);
    //getche();
    */
    //////// BITWISE OR USES ////////
    uint16_t bwResult = 0;                // 0000 0000 0000 0000
    uint16_t num1 = 12;                     // 0000 0000 0000 1100
    uint16_t num2 = 3;                      // 0000 0000 0000 0011
    bwResult = num1 | num2;                 // 0000 0000 0000 1111
    printf("%d\n", bwResult);

    uint16_t num3 = 240;                    // 0000 0000 1111 0000
    bwResult = bwResult | num3;             // 0000 0000 1111 1111
    printf("%d\n", bwResult);

    uint16_t num4 = 768;                    // 0000 0011 0000 0000
    bwResult = bwResult | num4;             // 0000 0011 1111 1111
    printf("%d\n", bwResult);

    uint16_t turnOn = 65280;                // 1111 1111 0000 0000
    bwResult = bwResult | turnOn;           // 1111 1111 1111 1111
    printf("%d\n", bwResult);
}

int bit_XOR(){
    /*
        // Bitwise XOR
        x ^ y         // return 1 if 1 is in either x or y's bit position... but not both. Returns 0 otherwise.

        0|0 = 0; 0|1 = 1; 1|1 = 0;
        3 & 6           3 => 0011
                        6 => 0110
                             0101 = 5

    */
    int a,b,c;
    printf("Read The Integers from keyboard (a & b) :-");
    scanf("%d %d", &a,&b);
    c=a^b;
    printf("The data after Exclusive OR operation is in c= %d",c);
    return 0;

    /*
    Breakdown of Swapping Variables W/O 'Temp' Var
    /* SWAP TWO VARIABLES WITH XOR (^) WITHOUT USING A TEMP VARIABLE */
    //////// SAMPLE EXECUTION OF BITWISE XOR SWAP ////////
    // uint8_t x = 1;                  // 0000 0001
    // uint8_t y = 254;                // 1111 1110
    // x = x ^ y;                      // x = 1111 1111 == (x)0000 0001 ^ (y)1111 1110
    // y = x ^ y;                      // y = 0000 0001 == (x)1111 1111 ^ (y)1111 1110
    // x = x ^ y;                      // x = 1111 1110 == 1111 1111 ^ 0000 0001

    // //////// SAMPLE EXECUTION OF BITWISE XOR SWAP /////////
    // uint8_t p = 42;                 // 0010 1010
    // uint8_t q = 11;                 // 0000 1011
    // p = p ^ q;                      // p = 0010 0001 = (p)0010 1010 ^ (q)0000 1011
    // q = p ^ q;                      // q = 0010 1010 = (p)0010 0001 ^ (q)0000 1011
    // p = p ^ q;                      // p = 0000 1011 = (p)0010 0001 ^ (q)0010 1010
}
int bit_NOT()
{
    /*
    // Bitwise NOT Pop Quiz 4
        x ^ y         // changes bits that are 0 to 1 and 1 to 0.

        unsigned Short x =  ?  = 59,301 (used calc)

        1110 0111 1010 0101
        ???? ???? ???? ????
        0001 1000 0101 1010  = ? 6,234
    */
    unsigned int v=0;
    printf("\n %u", ~v);
    printf("------------------------");
    
    //////// CLEAR A FLAG ////////
    /* flagStorage stores 8 flags in a 32 bit int using hex digits */
    unsigned int flagStorage = 0x11111111;      // All flags are set
    unsigned int missingID = 0x00000010;        // Flat #2
    printf("Flag storage: %d", flagStorage);
    flagStorage &= ~missingID;                  // 0x11111101
    printf("flagStorage &= ~missingID(%d) = %d", missingID, flagStorage);

}

int bit_shift(){
    /*
    // Bitwise shift Left Pop Quiz 5
        x << 4          // shifts bits a certain amount of positions left. Bit positions vacated by the left shift are always filled with 0 bits. Bit values shifted out to the left are lost.

        unsigned Short x =  ?  = 61,805 (used calc)

        1111 0001 0110 1101
        ???? ???? ???? ????
        0001 0110 1101 0000  = ? 5,840
    */

}
int lab1(){
    //1. Write a program to shift the entered number by three bits left and display the result.
    int x,y;
    printf("Enter integer to shift : ");
    scanf("%d", &x);
    x<<=3;
    y=x;
    printf("\nShifted left by 3 is = %d",y);
    return 0;
}

int lab2(){
    //2. Write a program to shift the entered number by five bits right and display the result
    int x;
    printf("Enter integer to shift : ");
    scanf("%d", &x);
    x>>=5;
    printf("\nShifted right by 5 is = %d",x);
    return 0;
}


int pham(){
    uint32_t userInput;
    uint32_t bitChecker;
    int shiftNum = 0;
    printf("Enter number: ");
    fscanf(stdin, "%d", &userInput);
    //User can specify number to shift, if negative, shift right, else left
    printf("Shift by: ");
    fscanf(stdin, "%d", &shiftNum);
    //negative number doesn't shift it the other way, 
    //if/else to check which way to shift and abs() to make positive
    //shift three bits left or right
    if (shiftNum < 0){
        userInput = userInput >> abs(shiftNum);
    } else{
        userInput = userInput << shiftNum;
    }
    //prints decimal and hexa of userInput
    fprintf(stdout, "Decimal: %d\nHexa: %X\n", userInput, userInput);
    fprintf(stdout, "Binary: ");
    //places bitchecker far left, as long as not null, increments by shifting once right
    for (bitChecker = 1 << 31; bitChecker; bitChecker = bitChecker >> 1){
        //compares bitchecker and userinput, if both 1, then print 1 else print 0
        (bitChecker & userInput) ? fprintf(stdout, "1"):fprintf(stdout, "0");
    }
    fprintf(stdout, "\n");
    return 0;
}

int main()
{
    //lab1();
    //lab2();
    pham();
}


/*


Student Performance Labs
    1. Write a program to shift the entered number by three bits left and display the result.

    2. Write a program to shift the entered number by five bits right and display the result

    3. Write a program to mask the most significant digit of the entered number. Use AND operator.

    4. Write a program to enter two numbers and find the smallest out of them. Use conditional operator.
*/

/*


*/

/*

Capstone 1: Flip a single bit using XOR
Initialize an unsigned int with an arbitrary value
Ask the user input on which bit position to flip (0 through ((sizeof(unsigned int)*8) -1))
Create a dynamic bit mask based on the user input "inputMask"
XOR the original value with the inputMask and print the result
NOTE: This capstone requires a lot of logic and almost all the previously used bitwise operators.

*/
#include <math.h>
#include <stdio.h>
long long convert(int n);
int my_convert() {
    int n;
    printf("Enter a decimal number: ");
    scanf("%d", &n);
    printf("%d in decimal = %lld in binary", n, convert(n));
    return 0;
}
long long convert(int n) {
    long long bin = 0;
    int rem, i = 1, step = 1;
    while (n != 0) {
        rem = n % 2;
        printf("Step %d: %d/2, Remainder = %d, Quotient = %d\n", step++, n, rem, n / 2);
        n /= 2;
        bin += rem * i;
        i *= 10;
    }
    return bin;
}
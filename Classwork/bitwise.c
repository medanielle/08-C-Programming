#include <stdio.h>

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
// Bitwise AND
x & y         // 1 if 1 in both x and y 
0&0 = 0; 0&1 = 0; 1&1 = 1;
3 & 6           3 => 0011
                6 => 0110
                     0010 = 2

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
*/

#include <stdint.h>
//Note: typedefs (Exact-width integer type, ie uint16_t) are defined in <stdint.h>

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

int main()
{
    bit_OR();
}
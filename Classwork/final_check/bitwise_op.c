/*
Write the function bitwiseOps that receives two char * strings representing a binary number.
All characters in the string should be either a '1' or '0'. Each string should be exactly
16 characters long.
The function will convert each binary representation to its equivelant integer value. So,
for example, if the string passed is '0000000000001111', this will be converted to 15.

After each string is converted, do the following:
   1. if both values are even numbers, use the bitwise & operator to and the values
      together and return the results.
   2. if both values are odd numbers, use the bitwise | operator to or the values
      together and return the results.
   3. otherwise, if both values are  > 255 then use the bitwise ^ operator to xor the
      values together and return the results.
   4. if none of the above apply, add the two values together and return the results.

If either of the provided strings is less or greater than 16 characters, the function will
return a -1.

If any of the characters in the string is other than a '1' or '0', the function will return
a -2.

*/


#include <stdio.h>
#include <string.h>
#include <math.h>
#include "TestCode.h"

int bin_to_int(char * s){
	char* start = s;
	int total = 0;
	while (*start)
	{
 	total *= 2;
 	if (*start++ == '1') total += 1;
	}
	return total;
}

int check_length(char * s){
    int c = 0;
    while (*s){
      c++;
      *s++;
   }
   // DEBUG  printf("Count = %d\n", c);
   return c;
}

int check_bits(char * s)
{
    for (int i = 0; s[i]; ++i)
        if (s[i] != '0' && s[i] != '1')
            return 0;
    return 1;
}

/*   

   4. if none of the above apply, add the two values together and return the results.*/

int bitwiseOps(char *first, char* second)
{
   //If either of the provided strings is less or greater than 16 characters, 
   if (check_length(first)!= 16 || check_length(second) != 16){
      // DEBUG printf("too long/short!\n");
      // the function will return a -1.
      return -1;
   }
   // If any of the characters in the string is other than a '1' or '0', 
   if (check_bits(first) == 0 || check_bits(second) == 0){
      // DEBUG printf("not bits (0/1)!\n");
      // the function will return a -2.
      return -2;
   }
   int final = 0;
   int f_num = bin_to_int(first);
   int s_num = bin_to_int(second);
   // DEBUG  printf("first: %s = %d \t second: %s = %d\n", first, f_num, second, s_num);
   // if both values are even numbers
   if (f_num%2 == 0 && s_num%2 == 0){
      //use the bitwise & operator to and the values together and return the results.
      final = f_num & s_num;
      //  DEBUG  printf("Return (even) %d\n", final);
      return final;
   }
   // if both values are odd numbers, 
   else if (f_num%2 == 1 && s_num%2 == 1){
      // use the bitwise | operator to or the values together and return the results.
      final = f_num | s_num;
      //  DEBUG  printf("Return (odd) %d\n", final);
      return final;
   }
   // otherwise, if both values are  > 255 
   else if (f_num > 255 && s_num > 255){
      // then use the bitwise ^ operator to xor the values together and return the results.
      final = f_num ^ s_num;
      //  DEBUG  printf("Return (over 255) %d\n", final);
      return final;
   }
   // if none of the above apply, 
   else {
      // add the two values together and return the results
      final = f_num + s_num;
      //  DEBUG  printf("Return (other) %d\n", final);
      return final;
   }
}

int main(){
    printf("Return %d\n", bitwiseOps("0000000000001110","0000000111111111")); //, 525); 
    
	printf("Return %d\n", bitwiseOps("0000000000001110","0000000111111111")); //, 525); 
	printf("Return %d\n", bitwiseOps("0000000000001111","0000000000001111")); //, 15);
	printf("Return %d\n", bitwiseOps("0000000001001111","0000000000001111")); //, 79);
	printf("Return %d\n", bitwiseOps("0000000000001110","0000000000001110")); //, 14);
	printf("Return %d\n", bitwiseOps("1110000000001110","0000000000001110")); //, 14);
	printf("Return %d\n", bitwiseOps("0000000100000001","0000000100000000")); //, 1);
	printf("Return %d\n", bitwiseOps("000000000000111 ","0000000000001110")); //, -2);
	printf("Return %d\n", bitwiseOps("0000000000001110"," 000000000001110")); //, -2);
	printf("Return %d\n", bitwiseOps("0000000000002110","0000000000001110")); //, -2);
	printf("Return %d\n", bitwiseOps("00000000000011101","0000000000001110")); //, -1);
	printf("Return %d\n", bitwiseOps("0000000000001110","000000000001110")); //, -1);
}

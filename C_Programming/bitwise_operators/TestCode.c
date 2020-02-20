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
   printf("Count = %d\n", c);
   return c;
}

int bitwiseOps(char *first, char* second)
{
   if (check_length(first)!= 16 || check_length(second) != 16){
      printf("too long/short!\n");
      return -1;
   }
   int f_num = bin_to_int(first);
   int s_num = bin_to_int(second);
	return 0;
}

int main(){
   bitwiseOps("0101", "1010")
}

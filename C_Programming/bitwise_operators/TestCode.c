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

int bitwiseOps(char *first, char* second)
{
	return 0;
}

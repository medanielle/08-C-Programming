
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "TestCode.h"

/*

Write a function bin_hex_StrToInt32 that receives a string containing either a binary or hex number. 
The function must return the string�s integer value. 

Note that a string that contains ONLY '1' and '0' can be considered as a binary or a hex string. 
For eaxmple, "10" can be a binary number equivalent to 2 or a hex number equivalent to 16.
If the string is containg ONLY '1' and '0', the default will be ***binary***.

If the input parameter is empty or invalid value, the function should return ERROR_INVALID_PARAMETER

Note: Do not call built-in library functions that accomplish these tasks automatically.
*/
int check_for_bin(char * s){
	char *ptrChar = s;
	int bin=0, hex=0;
	while(ptrChar){
		printf("%c", ptrChar);
		if (*ptrChar == '1' || *ptrChar == '0'){
			bin++; //
		}
		else{
			hex++;
		}
		++ptrChar;
	}
	printf("\n");
	if (hex == 0){
		// this is 'considered' binary
		return 1;
	}
	else{
		return 0;
	}
	
}

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

int hex_to_int(char *s){
	int val = 0;
	char* hex = s;
    while (*hex) {
        // get current character then increment
        int byte = *hex++; 
        // transform hex character to the 4bit equivalent number, using the ascii table indexes
        if (byte >= '0' && byte <= '9') byte = byte - '0';
        else if (byte >= 'a' && byte <='f') byte = byte - 'a' + 10;
        else if (byte >= 'A' && byte <='F') byte = byte - 'A' + 10;    
        // shift 4 to make space for new digit, and add the 4 bits of the new digit 
        val = (val << 4) | (byte & 0xF);
    }
    return val;
}

int bin_hex_StrToInt32(char * s)
{
	int check = check_for_bin(s);
	if (check){
		printf("this is bin!");
	}
	else{
		printf("this is hex");
	}
	return 0;
}

int main(){
	bin_hex_StrToInt32("010101");
	//bin_hex_StrToInt32("0AB");
}


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
//# define ERROR_INVALID_PARAMETER "The string was bad!"
#include <windows.h>
int check_for_bin(char * s)
{
	char *ptrChar = s;
	int bin=0, hex=0;
	while(*ptrChar)
	{
		printf("%c", *ptrChar);
		//int num = int(*ptrChar);
		if (*ptrChar == '1' || *ptrChar == '0'){
			bin++; //
		}
		else if (*ptrChar >= '2' && *ptrChar <= '9'){
			hex++;
		}
		else if (*ptrChar >= 'A' && *ptrChar <= 'Z')
		{
			hex++;
		}
		else{
			printf("\nBad Entry\n");
			return ERROR_INVALID_PARAMETER;
			exit(ERROR_INVALID_PARAMETER);
		}
		++ptrChar;
	}
	printf("\n");
	if (hex == 0)
	{
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
        char byte = *hex++; 
        // transform hex character to the 4bit equivalent number, using the ascii table indexes
        if (byte >= '0' && byte <= '9') {
			byte = byte - '0';
		}
        else if (byte >= 'a' && byte <='f') {
			byte = byte - 'a' + 10;
		}
        else if (byte >= 'A' && byte <='F'){
			byte = byte - 'A' + 10;
		}     
		//else{
			//return ERROR_INVALID_PARAMETER;
		//}
        // shift 4 to make space for new digit, and add the 4 bits of the new digit 
        val = (val << 4) | (byte & 0xF);
    }
    return val;
}

int bin_hex_StrToInt32(char * s)
{
	if (s == ""){
		printf("\nEmpty\n");
		return ERROR_INVALID_PARAMETER;
	}
	int check = check_for_bin(s);
	int x = 0;
	if (check){
		printf("this is bin!\n");
		x = bin_to_int(s);
		printf("Int = %d \n", x);
	}
	else{
		printf("this is hex!\n");
		x = hex_to_int(s);
		printf("Int = %d\n", x);
	}
	return 0;
}
/*
void check_error(char* s){
	int *ptr = s;
	while (*ptr){
		if (*ptr >= '0' && *ptr <= '9'){
			continue;
		}
		else if (*ptr >= 'A' && *ptr <= 'Z')
		{
			continue;
		}
		else{
			printf("Bad Entry");
			return ERROR_INVALID_PARAMETER;
		}
	}
}
*/
//char * stringlist[] = {""," ", "00 11", ".0123", "0.", "+00", "0.1", "10+", "12fl", "abcdefg" };
int main(){
	char bin_string[] = "10101010";
	char hex_string[] = "ABCD";
	bin_hex_StrToInt32(bin_string);
	bin_hex_StrToInt32(hex_string);
	bin_hex_StrToInt32("");
	bin_hex_StrToInt32(" ");
	bin_hex_StrToInt32("00 11");
	bin_hex_StrToInt32(".0123");
	bin_hex_StrToInt32("+00");
	bin_hex_StrToInt32("0.1");
	bin_hex_StrToInt32("10+");
	bin_hex_StrToInt32("12fl");
	bin_hex_StrToInt32("abcdefg");
}

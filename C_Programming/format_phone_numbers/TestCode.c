#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/* 

Write the function formatNums that receives a 10-element array of char *.
Each element contains a string of characters representing a phone number that is
not necessarily in the proper format required.

Each received phone number may be in formats such as:  "999-999-9999", "9999999999",
"(999) 9999999", "999,999,9999" or any other format. The important thing is that
each provided string should have 10 digits and only 10 digits. Digits will only include 0-9, not dashes "-".

The proper output format required is:  (999) 999-9999

The function should create a new 10-element array of char * and convert each
provided phone number to the proper format and place in the new array.
Once processed, the function should return a pointer to the new array.

If any provided phone number contains more or less than 10 digits, the function
should return NULL.

Example:
Input: { "(210)3157904","2103157904","1031376904","(210) 3157904",
					 "7210313704","210-315-7904","210 315 7904","(210) 315-7904",
					 "8888675309","2103157904" }

Proper return: { "(210) 315-7904","(210) 315-7904","(103) 137-6904","(210) 315-7904",
									 "(721) 031-3704","(210) 315-7904","(210) 315-7904","(210) 315-7904",
									"(888) 867-5309","(210) 315-7904" }

*/
#define MAX 100


int ** extractAndAddNumbers(char ** nums)
{
	char **newNums;
	// A temporary string 
	char temp[MAX][MAX] = {0}; //const 

	// holds sum of all numbers present in the string 
	int sum = 0; 
	int j = 0, k = 0;
	// read each character in input string 
	for (int i = 0; i < 10; i++) 
	{ 

		// if current character is a digit 
		if (isdigit(text[i])) 
    	{
			temp[k][j] = text[i]; 
      	j++;
      	// DEBUG printf("Numeric String: %s\n", temp[k]);
    }
		// if current character is an alphabet 
		else
		{ 
			// increment sum by number found earlier 
			// (if any) 
			sum += atoi(temp[k]);
      		// DEBUG printf("Add: %d, Sum: %d\n", atoi(temp[k]), sum);
			// reset temporary string to empty 
			k++;
      		j = 0; 
		} 
	} 
	// atoi(temp.c_str()) takes care of trailing numbers 
  	sum += atoi(temp[k]);
  	// DEBUG printf("Add: %d, Sum: %d\n", atoi(temp[k]), sum);
	return sum;
	//return 0;
*/
}

char ** formatNums(char ** nums)
{
	char **newNums;
	return newNums;
}

int main(){
	char *nums[10] = { "(210)3157904","2103157904","1031376904","(210) 3157904",
					 "7210313704","210-315-7904","210 315 7904","(210) 315-7904",
					 "8888675309","2103157904" };
	extractAndAddNumbers(nums);
}
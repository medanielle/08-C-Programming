#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <math.h>
#include <string.h>


/* Write the function extractAndAddNumbers that receives a string of text as a parameter. The
string of text contains one or more series of digits embedded within it. The function will
locate each series of digits, convert each series of digits to a number, and add all the numbers
together and return the total value.

For example, as string may contain:  abc1307sfaskfsjadfja34kdsfljakfslkjflksjf902

The function will return the integer: 2243 for this example

if the string is empty or there are no digits in the string, the function should return 0



  */

#define MAX 100

int extractAndAddNumbers(char *text)
{
  if (text == ""){
    return 0;
  }
	// A temporary string 
	char temp[MAX][MAX] = {0}; //const 
  int len = strlen(text);

	// holds sum of all numbers present in the string 
	int sum = 0; 
  int j = 0, k = 0;
	// read each character in input string 
	for (int i = 0; i < len; i++) 
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
}

// Driver code 
int main() 
{ 
	// input alphanumeric string 
	char str[] = "abc1307sfaskfsjadfja34kdsfljakfslkjflksjf902";
	char str2[] = "i want to 10 add these 20 numbers up 30 to get total";
  char str3[] = "i want to 10 add these numbers up to get total";
  char str4[] = "i want to add these numbers up to get total";
  char str5[] = "";

  printf("string: %s Sum %d\n", str ,extractAndAddNumbers(str)); //2243

	printf("string: %s Sum %d\n", str2,extractAndAddNumbers(str2)); //60

	printf("string: %s Sum %d\n", str3,extractAndAddNumbers(str3)); //10

	printf("string: %s Sum %d\n", str4,extractAndAddNumbers(str4)); //0

  printf("string: %s Sum %d\n", str5 ,extractAndAddNumbers(str5)); //0


	return 0; 
} 

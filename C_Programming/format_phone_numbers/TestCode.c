#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

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
#define MAX 15


char * getnums(char * string)
{
	
	// A temporary string 
	char second[MAX] = {0}, third[MAX] = {0}; //const 
	char *first = malloc (sizeof (char) * MAX);

	// holds sum of all numbers present in the string  
	int n = 1, i = 0;
	first[0] = '(';
	// read each character in input string 
	while ( n < 4 )
	{ 
		// if current character is a digit 
		if (isdigit(string[i])) 
    	{
			first[n] = string[i]; 
      		n++;
      	// DEBUG printf("Numeric String: %s\n", temp[k]);
		}
		i++;
    }
	first[4] = ')';
	first[5] = ' ';
	first [6] = '\0';
	n = 0; 
	while ( n < 3 )
	{ 
		// if current character is a digit 
		if (isdigit(string[i])) 
    	{
			second[n] = string[i]; 
      		n++;
      	// DEBUG printf("Numeric String: %s\n", temp[k]);
		}
		i++;
    }
	second[3] = '-';
	second[4] = '\0';
	n = 0;
	while ( n < 4 )
	{ 
		// if current character is a digit 
		if (isdigit(string[i])) 
    	{
			third[n] = string[i]; 
      		n++;
      	// DEBUG printf("Numeric String: %s\n", temp[k]);
		}
		i++;
    }
	third[4] = '\0';
	strcat(first, second);
	strcat(first, third);
	printf("Last: %s\n", first);
	return first;
	//return 0;
}

char ** formatNums(char ** nums)
{
	//char ** newNums[MAX];
	//int len = sizeof(char *) * MAX + sizeof(char *) * MAX * MAX; 
    //char ** newNums[][MAX] = (char **)malloc(len); 
	//char ** newNums[15][15] = (char**) calloc(15, sizeof(char*) * 15);
	//char ** newNums[][11] = {malloc(15 * sizeof(char))};
	/*for (int i = 0; i<10; i++){
		printf("Entry: %s\n", nums[i]);
		//char new_phone[MAX];
		printf("1\n");
		//strcpy(new_phone, getnums(nums[i]));
		//printf("2: %s\n", new_phone);
		strcpy(*newNums[i], nums[i]);
		//*newNums[i] = *strdup(nums[i]);
		printf("3 \n");

		printf("Final: %s\n", newNums[i]);
	}
	*/
    size_t namesc=0;
    char **names_start=nums;
    while(*nums++){
        namesc++;
    }
	int i;
	char ** newNums=malloc(namesc*sizeof(*nums));
	for(i=0,nums=names_start;*nums;nums++,i++){
		//DEBUG printf("Entry: %s\n",*nums);
		newNums[i]=malloc(strlen(*nums) + 1);
		strcpy(newNums[i], getnums(*nums));
		//DEBUG printf("Copied: %s\n",newNums[i]);
	}
	return newNums;
}


int main(){
	char *nums[10] = { "(210)3157904","2103157904","1031376904","(210) 3157904",
					 "7210313704","210-315-7904","210 315 7904","(210) 315-7904",
					 "8888675309","2103157904" };
	//char num[20] = "(210)3157904";
	//printf("%s", getnums(num));
	printf("1");
	//char res = malloc(10*sizeof(*nums));
	char * res = &formatNums(nums);
	printf("2");
	for (int i = 0; i<10; i++){
		printf("Final: %s\t", res[i]);
	}
	printf("3");
}

//https://cboard.cprogramming.com/c-programming/99152-dereferencing-char-pointer-array.html

/*
		char second[MAX] = {0}, third[MAX] = {0}; //const 
		char *first = malloc (sizeof (char) * MAX);

		// holds sum of all numbers present in the string  
		int n = 1, j = 0;
		first[0] = '(';
		// read each character in input string 
		while ( n < 4 )
		{ 
			// if current character is a digit 
			if (isdigit(nums[i][j])) 
			{
				first[n] = nums[i][j]; 
				n++;
			// DEBUG printf("Numeric String: %s\n", temp[k]);
			}
			i++;
		}
		first[4] = ')';
		first[5] = ' ';
		first [6] = '\0';
		n = 0; 
		while ( n < 3 )
		{ 
			// if current character is a digit 
			if (isdigit(nums[i][j])) 
			{
				second[n] = nums[i][j]; 
				n++;
			// DEBUG printf("Numeric String: %s\n", temp[k]);
			}
			i++;
		}
		second[3] = '-';
		second[4] = '\0';
		n = 0;
		while ( n < 4 )
		{ 
			// if current character is a digit 
			if (isdigit(nums[i][j])) 
			{
				third[n] = nums[i][j]; 
				n++;
			// DEBUG printf("Numeric String: %s\n", temp[k]);
			}
			i++;
		}
		third[4] = '\0';
		strcat(first, second);
		strcat(first, third);
		printf("Last: %s\n", first);
		strcpy(*newNums[i], first);*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "TestCode.h"

/* DO NOT RUN YOUR SOLUTION IN COMMAND LINE - RUN SOLUTION VIA VISUAL STUDIO DEBUGGER */

/*
This problem will read and report voting results from four possible states (Texas, California, New York, Florida). 
The voting results are stored in an ascii file with the following information: County number and voter turnout percentage. 
Each line represents this data in a comma delimited format and each value is an integer. The files are located in
the same directory as your source code.

The following is an example of one line entry in the file:

487,54

487 is the county number
54 is the turnout percentage

Write a function findStats that accepts an int representing the state and a two-element int array 
(each element initialized to zero) that will hold a county number and turnout percentage of the 
county with the highest turnout.

The function’s first parameter:
1 – Texas (indicates to use texas.txt file)
2 – California (indicates to use california.txt file)
3 – New York (indicates to use newyork.txt file)
4 - Florida (indicates to use florida.txt file)

The function should open the appropriate file. Read the data a line at a time and find the
county with the highest voting percentage turnout. Place the county number in the first element
of the array, voting percentage in the second element of the array, each as integers.

If invalid first parameter (out of range), function returns ERROR_INVALID_DATA

If any voting percentage in file is < 0 or > 100, function returns ERROR_INVALID_DATA

If file fails to open, function returns ERROR_FILE_INVALID

If file read is successful, function returns ERROR_SUCCESS

Assume all files, once opened, contain valid format

Assume no duplicate high values in a file
*/
#define ERROR_INVALID_DATA -1
#define ERROR_FILE_INVALID -2

#define ERROR_SUCCESS 1
#define MAX 30
//char * check_states(int)
int findStats(int state, int stats[])
{
	//from four possible states (Texas, California, New York, Florida
	//487,54   (487 is the county number)   (54 is the turnout percentage)
	char filename[MAX];
	switch (state)
	{
	case 1:
		strcpy(filename, "texas.txt");
		break;
	case 2:
		strcpy(filename, "california.txt");
		break;
	case 3:
		strcpy(filename, "newyork.txt");
		break;
	case 4:
		strcpy(filename, "florida.txt");
		break;
	default:
		printf("Bad state!\n");
		return ERROR_INVALID_DATA;
	}
	printf("%d, %s\n", state, filename);
	FILE * myFile_ptr = fopen(filename, "r");
	int county, turnout;
	char tempBuff[256] = { 0 };	// Temporary buffer to store read lines
    char * tempReturnValue = tempBuff;
	if (myFile_ptr != NULL) 	// Verify fopen() succeeded… 
    {
		tempReturnValue = fgets(tempBuff, 256, myFile_ptr);
        while (tempReturnValue) // Continue reading until return value is NULL
        {
			char * tok = strtok(tempReturnValue, ",");
			county = atoi(tok);
			tok = strtok(NULL, ",");
			turnout = atoi(tok);
			printf("Line: %d,%d\n", county, turnout);
            if (turnout< 0 || turnout>100) 	// If EOF hasn’t been reached…
            {
				printf("Bad turnout!\n");
                return ERROR_INVALID_DATA;
            }
			if (turnout > stats[1]){
				stats[1] = turnout;
				stats[0] = county;
				printf("Higher: %d,%d\n", stats[0], stats[1]);
			}
			tempReturnValue = fgets(tempBuff, 256, myFile_ptr);
        }
    }
    else 			// …Otherwise, fopen() failed
    {
        puts("Error opening file!\n"); 	// Tell the user and…
        return ERROR_FILE_INVALID;			// …Return an error value
    }
    // Close the existing file.    &    Close the new file 
    fclose(myFile_ptr); 
	puts("Success!\n");
	return ERROR_SUCCESS;
}

int main(){
	int state = 1;
	int stats[2] = { 0 };
	int res[] = { 123,67 };
	//findStats(state, stats);
	printf("Return: %d \t", findStats(state, stats));
	printf("Result: %d, %d\n", stats[0], stats[1]);

	state = 2;
	int stats2[2] = { 0 };
	int res2[] = { 255,74 };

	printf("Return: %d \t", findStats(state, stats2));
	printf("Result: %d, %d\n", stats2[0], stats2[1]);

	state = 0;
	int stats3[2] = { 0 };
	printf("Return: %d \t", findStats(state, stats3));
	state = 4;
	printf("Return: %d \t", findStats(state, stats3));
	state = 3;
	printf("Return: %d \t", findStats(state, stats3));
}
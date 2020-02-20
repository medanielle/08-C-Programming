
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


int findStats(int state, int stats[])
{

	return 0;
}
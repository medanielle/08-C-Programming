#include <string.h>
#include <stdio.h>
#include <stdlib.h>


/*
Write the function checkHand that receives a 5-element integer array that represents a
fictitious poker hand. The valid values for this array are the numbers 1 through 13. 
For this game of poker there are only three types of hands worth noting:  
three of a kind, four of a kind, or a straight.  A straight involves all 5 cards being 
in a sequence such as 3, 4, 5, 6, 7 etc.

The function will evaluate the array to determine the best hand.  The precedence of 
hands is:

1. straight (best)
2. four of a kind
3. three of a kind
4  nothing (worst)

The function will return one of the following strings based on analysis: 
    "straight", "four", "three", "nothing", or "invalid"

The function will return "invalid" if any of the values are < 1 or > 13.


*/




char* checkHand(int hand[])
{
	return "nothing";
}


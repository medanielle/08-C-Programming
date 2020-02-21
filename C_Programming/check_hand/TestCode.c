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


#define MAX 100

int check_invalid(int hand[]){
    for (int i = 0 ; i < 5; i++){
        // if any of the values are < 1 or > 13.
        if (hand[i]< 1 || hand[i] > 13){
            // The function will return "invalid"
            return 1;
        }
    }
    return 0;
}

char* checkHand(int hand[])
{

    // The valid values for this array are the numbers 1 through 13. 
    // three of a kind, four of a kind, or a straight.  A straight involves all 5 cards being in a sequence such as 3, 4, 5, 6, 7 etc.

    //The function will evaluate the array to determine the best hand.  The precedence of hands is:
        //1. straight (best)
    // 2. four of a kind
    // 3. three of a kind
    // 4  nothing (worst)
    char final[][MAX] = {"straight", "four", "three", "nothing", "invalid"};
    int a,b,c,d,e;
    a = game_card[0].value;
    b = game_card[1].value;
    c = game_card[2].value;
    d = game_card[3].value;
    e = game_card[4].value;

    // four of a kind
    if  ((a==b && b==c && c==d)||(b==c && c==d && d==e)|| (c==d && d==e && e==a) || (d==e && e==a && a==b) || (e==a && a==b && b==c))

    // three of a kind
    if ( (a==b && b==c) || (a==b && b==d) || (a==b && b==e) || (a==c && c==d) || (a==c && c==e) || (a==d && d==e) || (b==c && c==d) || (b==c && c==e) || (b==d && d==e) ||(c==d && d==e))

    a = game_card[0].value+4;
		b = game_card[1].value+3;
		c = game_card[2].value+2;
		d = game_card[3].value+1;
		if( a==b && b==c && c==d && d==game_card[4].value )
	return "nothing";
}


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


void swap(int *xp, int *yp) 
{ 
    int temp = *xp; 
    *xp = *yp; 
    *yp = temp; 
} 

// A function to implement bubble sort 
void bubbleSort(int arr[], int n) 
{ 
    int i, j; 
    for (i = 0; i < n-1; i++)     

        // Last i elements are already in place 
        for (j = 0; j < n-i-1; j++) 
            if (arr[j] > arr[j+1]) 
                swap(&arr[j], &arr[j+1]); 
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
    
    int a,b,c,d,e;

    // check for invalid
    for (int i = 0 ; i < 5; i++){
        // if any of the values are < 1 or > 13.
        if (hand[i]< 1 || hand[i] > 13){
            // The function will return "invalid"
            return "invalid";
        }    
    }
    // sort hand
    bubbleSort(hand, 5);
    // check for straight
    a = hand[0]+4;
    b = hand[1]+3;
    c = hand[2]+2;
    d = hand[3]+1;
    if( a==b && b==c && c==d && d==hand[4]){
        return "straight";
    }
    // check for  four of a kind
    a = hand[0];
    b = hand[1];
    c = hand[2];
    d = hand[3];
    e = hand[4];
    if ((a==b && b==c && c==d)||(b==c && c==d && d==e)|| (c==d && d==e && e==a) || (d==e && e==a && a==b) || (e==a && a==b && b==c)){
        return "four";
    }

    // check for three of a kind
    else if ( (a==b && b==c) || (a==b && b==d) || (a==b && b==e) || (a==c && c==d) || (a==c && c==e) || (a==d && d==e) || (b==c && c==d) || (b==c && c==e) || (b==d && d==e) ||(c==d && d==e)){
        return "three";
    }
    else {
        return "nothing";
    }

}

int main()
{
    int h1[] = { 3,5,6,7,8 };
	int h2[] = { 2,3,4,5,6 };
	int h3[] = { 7,7,7,7,1 };
	int h4[] = { 1,7,7,7,7 };
	int h5[] = { 10,10,10,2,2 };
	int h6[] = { 10,10,5,10,8 };
	int h7[] = { 2,10,2,10,2 };
	int h8[] = { 13,9,11,12,10};
	int h9[] = { 1,1,10,2,2 };
	int h10[] = { 0,10,10,2,2 };
	int h11[] = { 10,10,10,2,20 };
	int h12[] = { 10,10,10,2,10 };
	printf("Return %d, %s\n", strcmp("nothing", checkHand(h1)), checkHand(h1));
	printf("Return %d, %s\n", strcmp("four", checkHand(h3)), checkHand(h3));
	printf("Return %d, %s\n", strcmp("straight", checkHand(h2)), checkHand(h2));
	printf("Return %d, %s\n", strcmp("four", checkHand(h4)), checkHand(h4));
	printf("Return %d, %s\n", strcmp("three", checkHand(h5)), checkHand(h5));
	printf("Return %d, %s\n", strcmp("three", checkHand(h6)), checkHand(h6));
	printf("Return %d, %s\n", strcmp("three", checkHand(h7)), checkHand(h7));
	printf("Return %d, %s\n", strcmp("straight", checkHand(h8)), checkHand(h8));
	printf("Return %d, %s\n", strcmp("nothing", checkHand(h9)), checkHand(h9));
	printf("Return %d, %s\n", strcmp("invalid", checkHand(h10)), checkHand(h10));
	printf("Return %d, %s\n", strcmp("invalid", checkHand(h11)), checkHand(h11));
	printf("Return %d, %s\n", strcmp("four", checkHand(h12)), checkHand(h12));
}
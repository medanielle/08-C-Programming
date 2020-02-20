#include <stdio.h>


/*


** NOTE: THE SOLUTION FOR THIS PROBLEM IS BASED ON A SPECICALLY DEFINED ALGORITHM EXPLAINED BELOW. ALTHOUGH THE AUTOMATED TESTS
** MAY BE SUCCESSFUL, YOUR SOLUTION WILL RECEIVE A MANUAL REVIEW FOR FINAL DETERMINATION OF PASS/FAIL

Bubble Sort
--------------
Bubble Sort is the simplest sorting algorithm that works by repeatedly swapping the adjacent elements if they are in wrong order.

Example:
First Pass:
( 5 1 4 2 8 ) -> ( 1 5 4 2 8 ), Here, algorithm compares the first two elements, and swaps since 5 > 1.
( 1 5 4 2 8 ) ->  ( 1 4 5 2 8 ), Swap since 5 > 4
( 1 4 5 2 8 ) ->  ( 1 4 2 5 8 ), Swap since 5 > 2
( 1 4 2 5 8 ) -> ( 1 4 2 5 8 ), Now, since these elements are already in order (8 > 5), algorithm does not swap them.

Second Pass:
( 1 4 2 5 8 ) -> ( 1 4 2 5 8 )
( 1 4 2 5 8 ) -> ( 1 2 4 5 8 ), Swap since 4 > 2
( 1 2 4 5 8 ) -> ( 1 2 4 5 8 )
( 1 2 4 5 8 ) ->  ( 1 2 4 5 8 )

Third Pass:
( 1 2 4 5 8 ) -> ( 1 2 4 5 8 )
( 1 2 4 5 8 ) -> ( 1 2 4 5 8 )
( 1 2 4 5 8 ) -> ( 1 2 4 5 8 )
( 1 2 4 5 8 ) -> ( 1 2 4 5 8 )

Fourth Pass:
( 1 2 4 5 8 ) -> ( 1 2 4 5 8 )
( 1 2 4 5 8 ) -> ( 1 2 4 5 8 )
( 1 2 4 5 8 ) -> ( 1 2 4 5 8 )
( 1 2 4 5 8 ) -> ( 1 2 4 5 8 )
*/



/*
The function bubbleSort receives a pointer to a function�either function ascending or function descending�as an argument, in addition to an integer array and the size of the array.
The parameter compare is a pointer to the comparison function that determines sorting order.
The function returns an integer pointer to the sorted array.
*/

int* bubbleSort(int elements[], size_t length, int(*compare)(int a, int b))
{
	return elements;
}


// @brief Determine whether elements are out of order for an ascending order sort
// @return Boolean indicating whether the two elements should be swapped
int ascending(int a, int b)
{
	return 0;         
}

// @brief Determine whether elements are out of order for a descending order sort
// @return Boolean indicating whether the two elements should be swapped
int descending(int a, int b)
{
	return 0;      
}
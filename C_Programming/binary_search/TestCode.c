
#include <stdio.h>
#include "TestCode.h"


/*


** NOTE: THE SOLUTION FOR THIS PROBLEM IS BASED ON A SPECICALLY DEFINED ALGORITHM EXPLAINED BELOW. ALTHOUGH THE AUTOMATED TESTS
** MAY BE SUCCESSFUL, YOUR SOLUTION WILL RECEIVE A MANUAL REVIEW FOR FINAL DETERMINATION OF PASS/FAIL


Binary Search
--------------
Binary Search: Search a ***sorted*** array by repeatedly dividing the search interval in half.
Begin with an interval covering the whole array.
If the value of the search key is less than the item in the middle of the interval, narrow the interval to the lower half.
Otherwise narrow it to the upper half. Repeatedly check until the value is found or the interval is empty.

Example:
If searching for 23 in the 10- element array:
2 5 8 12 16 23 38 56 72 91
1- Get the middle element, which is 16 (not our target)
2- Since 23 > 16, the new search will work on the right half of the array (i.e., 23 38 56 72 91)
3- Get the middle of the new working array, which is 56
4- Since 23 < 56, work on the left half of the array (i.e., 23 38)
5- Compute the middle, which is 23. The target found

BSearch is a binary search function.
It takes 4 parameters:
1- arr: A sorted array of integers
2- left: the first index of the array that needs to be searched
3- right: the last index of the array that needs to be searched
4- target: The search key

BSearch function returns the index of search target in
the given array, arr. If the target is not found, return -1
*/

int BSearch(int arr[], int left, int right, int target)
{

	return 0;
}

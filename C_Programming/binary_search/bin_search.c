
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

//int BSearch(int arr[], int left, int right, int target)
//{

	//return 0;
//}
int BSearch(int arr[], int left, int right, int target)
{
    int middle;
    while (left <= right)
    {
        middle = left + (right - left) / 2;
        // DEBUG   printf("middle index == %i, middle value == %i\n", middle, arr[middle]);
		// if it matches then return the index value
        if (target == arr[middle]){
            return middle;
		}
		// If the value of the search key is less than the item in the middle of the interval, 
        else if (target < arr[middle]){
            //narrow the interval to the lower half
			right = middle - 1;
		}
		
		// Otherwise narrow it to the upper half.
        else  {
			left = middle + 1;
		}
    }
	// If the target is not found, return -1
    // DEBUG  printf("Not in this section\n");
	return -1;
}
int main()
{

	int searchArray[] = { 2, 5, 8, 12, 16, 23, 38, 56, 72, 91 };
	int arr[] = {2, 5, 8, 12, 16, 23, 38, 56, 72, 91};

	printf("Return %d\n", BSearch(searchArray, 0, 9, 100)); // ASSERT_EQ(-1, 
	printf("Return %d\n", BSearch(searchArray, 0, 9, 2)); // ASSERT_EQ(0, 
	printf("Return %d\n", BSearch(searchArray, 0, 9, 16)); // ASSERT_EQ(4, 
	printf("Return %d\n", BSearch(searchArray, 0, 9, 91)); // ASSERT_EQ(9, 
	printf("Return %d\n", BSearch(arr, 0, 9, 23));

	int searchArrays[3][10] = {
		{ -30, -28, -25, -23,-18, -16, -14, -7, -2, -1 },
		{ 15, 25, 37, 41, 48, 63, 78, 102, 124, 234 },
		{ -5, -3, 22, 35, 48, 52, 61, 73, 83, 96 }
	};

	printf("Return %d\n", BSearch(searchArrays[0], 0, 9, 0)); // ASSERT_EQ(-1, 
	printf("Return %d\n", BSearch(searchArrays[0], 0, 9, -23)); //  //  ASSERT_EQ(3, 
	printf("Return %d\n", BSearch(searchArrays[1], 0, 9, 14));  //  ASSERT_EQ(-1, 
	printf("Return %d\n", BSearch(searchArrays[1], 0, 9, 63));  //  ASSERT_EQ(5, 
	printf("Return %d\n", BSearch(searchArrays[2], 0, 9, 20));  //  ASSERT_EQ(-1, 
	printf("Return %d\n", BSearch(searchArrays[2],  0, 9, 83));  //  ASSERT_EQ(8, 
}
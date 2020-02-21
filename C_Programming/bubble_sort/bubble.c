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
	int i,j,temp;
    /*sort elements in Ascending Order*/
    for(i=0; i<(length-1); i++)
    {
        for(j=0; j<(length-i-1); j++)
        {
            if(compare(elements[j], elements[j+1]))
            {
                temp=elements[j];
                elements[j]=elements[j+1];
                elements[j+1]=temp;
            }
        }
    }
	return elements;
}


// @brief Determine whether elements are out of order for an ascending order sort
// @return Boolean indicating whether the two elements should be swapped
int ascending(int a, int b)
{
	if(a>b){
		return 1;
	}
	else{
		return 0;
	}         
}

// @brief Determine whether elements are out of order for a descending order sort
// @return Boolean indicating whether the two elements should be swapped
int descending(int a, int b)
{
	if(a<b){
		return 1;
	}
	else{
		return 0;
	}         
}

void display(int arr[], int limit) {
	printf("Array elements in Order:\n");
    for(int i=0; i<limit; i++)
        printf("%d ",arr[i]);
     
    printf("\n");
}


/*Bubble Sort - C program to sort an Array 
in Ascending and Descending Order.*/
 
#include <stdio.h>
 
#define MAX 100
 
int main()
{
    int arr[] = {7, 5, 12, 44, 23};
    int i,j,temp;
    int limit = sizeof(arr)/sizeof(arr[0]);

    printf("Ascending Order:\n");
	display(bubbleSort(arr, limit, ascending), limit);


    printf("Descending Order:\n");
	display(bubbleSort(arr, limit, descending), limit);

	int unSortedArrays[4][5] = {
								{5, 7, 12, 23, 44},  //already in ascending order
								{44,23, 12, 7, 5},   //already in descending order  
								{70, 64, 30, 22, 15}, //already in descending order  
								{15, 22, 30, 64, 70}, //already in ascending order								   
	};
	int unSortedArrays2[4][5] = {
								   {7, 5, 12, 44, 23},
								   {-3, -13, -1, -9, -4},
								   {93,-5, 17, 0, 72},
								   {15, 30, 22, 64, 70}
	};
     
    return 0;
}

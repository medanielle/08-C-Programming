// # Sorting Performance labs 
/*
1. ## Write a C program that implements the bubble sort algorithm

``` Example output:

Enter the number of elements in the array : 10
Enter the elements: 8 9 6 7 5 4 2 3 1 10
The array sorted in ascending order is :
1 2 3 4 5 6 7 8 9 10

```
*/
/* Bubble sort code */
#include <stdio.h>
void show_arr(int array[], int n)
{
    for (int c = 0; c < n; c++)
    {
        printf("%d ", array[c]);
    }
    printf("\n");
}

int bubble()
{
    int array[100], n, c, d, temp;
  
    printf("Enter number of elements in the array : \n");
    scanf("%d", &n);
  
    printf("Enter %d integers\n", n);

    // read in each int entered by the customer based on number entered above
    for (c = 0; c < n; c++)
    {
        scanf("%d", &array[c]);
    }
    // loop for entire array
    for (c = 0 ; c < n - 1; c++)
    {
        // loop through each number
        for (d = 0 ; d < n - c - 1; d++)
        {
            if (array[d] > array[d+1]) /* For decreasing order use < */
            {
                //printf("%d > %d\n", array[d], array[d+1]);
                temp = array[d];  // set swap to the higher value
                array[d] = array[d+1];  //set that spot to the lower value 
                array[d+1] = temp;  // set the lower to the higher
                //show_arr(array, n);
            }
        }
    }
  
    printf("Sorted list in ascending order:\n");
    // loop through array and print it
    show_arr(array, n);
    return 0;
}
/*
2. ## Write a C program that implements the insertion sort algorithm

``` Example output:
Enter the number of elements in the array : 5
Enter the elements of the array: 500 1 50 23 76
The sorted array is:
1 50 23 76 500 

```
*/

/* C Program to sort an array in ascending order using Insertion Sort */
#include <stdio.h>
int insert()
{
    int n, i, j, temp;
    int arr[64];
 
    printf("Enter number of elements\n");
    scanf("%d", &n);
 
    printf("Enter %d integers\n", n);
    // loop through to get each num
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    // start insertion algo
    for (i = 1 ; i <= n - 1; i++)
    {
	    j = i;
            while ( j > 0 && arr[j-1] > arr[j])
            {	        
                // swap
                temp     = arr[j];
                arr[j]   = arr[j-1];
                arr[j-1] = temp;
                j--;
            }
    }
    printf("Sorted list in ascending order:\n");
    show_arr(arr, n);
    return 0;
}

/*
3. ## Write a C program that implements the quick sort algorithm that takes in an array ( int arr[] = {80, 26, 37, 98, 50, 7};) and sorts it:
Example output
```
Sorted array: 7 26 37 50 80 98

```
*/

/* C implementation QuickSort */
#include<stdio.h> 

// A utility function to swap two elements 
void quick_swap1(int* a, int* b) 
{ 
	int t = *a; 
	*a = *b; 
	*b = t; 
} 

/* This function takes last element as pivot, places the pivot element at its correct position in sorted 
	array, and places all smaller (smaller than pivot) to left of pivot and all greater elements to right 
of pivot */
int partition1(int arr[], int low, int high) 
{ 
	int pivot = arr[high]; // pivot 
	int i = (low - 1); // Index of smaller element 

	for (int j = low; j <= high- 1; j++) 
	{ 
		// If current element is smaller than the pivot 
		if (arr[j] < pivot) 
		{ 
			i++; // increment index of smaller element 
			quick_swap1(&arr[i], &arr[j]); 
		} 
	} 
	quick_swap1(&arr[i + 1], &arr[high]); 
	return (i + 1); 
} 

/* The main function that implements QuickSort 
arr[] --> Array to be sorted, 
low --> Starting index, 
high --> Ending index */
void quickSort1(int arr[], int low, int high) 
{ 
	if (low < high) 
	{ 
		/* pi is partitioning index, arr[p] is now at right place */
		int pi = partition1(arr, low, high); 

		// Separately sort elements before partition and after partition 
		quickSort1(arr, low, pi - 1); 
		quickSort1(arr, pi + 1, high); 
	} 
} 

/* Function to print an array */
void printArray(int arr[], int size) 
{ 
	int i; 
	for (i=0; i < size; i++) 
		printf("%d ", arr[i]); 
	printf("\n"); 
} 

// Driver program to test above functions 
int test_quick() 
{ 
    // set up variables
	int arr[] = {80, 26, 37, 98, 50, 7};
    int n = sizeof(arr)/sizeof(arr[0]); 
    // print unsorted
    printf("Unsorted Array: \n");
    printArray(arr, n);
    //sort
	quickSort1(arr, 0, n-1); 
    //print sorted
	printf("Sorted array: \n"); 
	printArray(arr, n); 
	return 0; 
} 




/// ADD section

/*	Test driver for sorting solutions. 
	   Written by: 90cos
	   Date: 2018

*/
#include <stdio.h>
#include <stdbool.h>
#define cMax_Ary_Size 15

//	Constants
// const int cMax_Ary_Size = 15;

/*	Prototype Declarations */
int bubbleSort (int* list, int n);
	
int fix_bubble ( void ) 
{
/*	Local Declarations */
	int countExch;
	int	ary[cMax_Ary_Size] = {89, 72, 3,  15, 21, 57, 61, 44, 19, 98, 5,  77, 39, 59, 61};

/*	Statements */
	printf( "Unsorted array: ");
	for (int i = 0; i < cMax_Ary_Size; i++ )
		printf( "%3d", ary[ i ] );
		
	countExch = bubbleSort (ary, cMax_Ary_Size);

	printf( "\nSorted array:   " );
	for (int i = 0; i < cMax_Ary_Size; i++)
		printf( "%3d", ary[ i ] );
	printf( "\n" );
	
	printf("Total exchanges: %d\n", countExch);
	return 0;
}	/* main */

/*	=================== bubbleSort ====================
	Sort list using bubble sort. Adjacent elements are
	compared and exchanged until list is sorted.
	   Pre    list must contain at least one item 
	          last contains index to last element 
	   Post   list rearranged in sequence low to high 
	   Return number of exchanges 
*/

int bubbleSort (int* list, int n)
{
    int count = 0;
    for (int c = 0 ; c < n - 1; c++)
    {
        // loop through each number
        for (int d = 0 ; d < n - c - 1; d++)
        {
            if (list[d] > list[d+1]) /* For decreasing order use < */
            {
                //printf("%d > %d\n", list[d], list[d+1]);
                int swap = list[d];  // set swap to the higher value
                count+=1;
                list[d] = list[d+1];  //set that spot to the lower value 
                count+=1;
                list[d+1] = swap;  // set the lower to the higher
                //show_arr(list, n);
                count+=1;

                //xor
                //list[j] ^= list[j+1];
                //list[j+1] ^= list[j];
            }
        }
    }
	return count;
}	// bubbleSort 


/*
Results:
Unsorted array:  89 72  3 15 21 57 61 44 19 98  5 77 39 59 61
Sorted array:     3  5 15 19 21 39 44 57 59 61 61 72 77 89 98
Total exchanges: 144
*/



/*	Test driver for sorting solutions. 
	   Written by: 90cos
	   Date: 2018
	
*/
#include <stdio.h>
#define CMAX 15

/*	Prototype Declarations */
int insertionSort (int* list, int last);
	
int fix_insert ( void ) 
{
/*	Local Declarations */
	int countExch;
	int	ary[CMAX] = {89, 72, 3,  15, 21, 57, 61, 44, 19, 98, 5,  77, 39, 59, 61};

/*	Statements */
	printf( "Unsorted array: ");
	for (int i = 0; i < CMAX; i++ )
		printf( "%3d", ary[ i ] );
		
	countExch = insertionSort ( ary, CMAX);

	printf( "\nSorted array:   " );
	for (int i = 0; i < CMAX; i++)
		printf( "%3d", ary[ i ] );
	printf( "\n" );
	
	printf("Total exchanges: %d\n", countExch);
	return 0;
}	/* main */

/*	================== insertionSort ==================== 
	Sort list using Insertion Sort. The list is divided 
	into sorted and unsorted lists. With each pass,  
	first element in unsorted list is inserted into 
	sorted list.
	   Pre    list must contain at least one element
	          last is index to last element in the list
	   Post   list rearranged, exchange counted
	   Return count of exchanges
*/
int insertionSort (int* list, int size) 
{
    int count = 0;
    for (int step = 1; step < size; step++)
    {
        int key = list[step];
        count+=1;
        int j = step - 1;
        while (key < list[j] && j >= 0)
        {
            // For descending order, change key<list[j] to key>list[j].
            list[j + 1] = list[j];
            --j;
            count+=1;
        }
        list[j + 1] = key;
        count+=1;
    }
    return count;
}  	// insertionSort

/*
Results:
Unsorted array:  89 72  3 15 21 57 61 44 19 98  5 77 39 59 61
Sorted array:     3  5 15 19 21 39 44 57 59 61 61 72 77 89 98
Total exchanges: 76
*/

/*	Test driver for sorting solutions. 
	   Written by:  90cos
	   Date: 2018

*/
#include <stdio.h>
#define CMAX 15

/*	Prototype Declarations */
int selectionSort(int arr[], int n);
	
int fix_select ( void ) 
{
/*	Local Declarations */
	int countExch;
	int	ary[CMAX] = {89, 72, 3,  15, 21, \
	                           57, 61, 44, 19, 98, \
	                            5,  77, 39, 59, 61};

/*	Statements */
	printf( "Unsorted array: ");
	for (int i = 0; i < CMAX; i++ )
		printf( "%3d", ary[ i ] );
		
	countExch = selectionSort ( ary, CMAX);

	printf( "\nSorted array:   " );
	for (int i = 0; i < CMAX; i++)
		printf( "%3d", ary[ i ] );
	printf( "\n" );
	
	printf("Total exchanges: %d\n", countExch);
	return 0;
}	/* main */

/*	============ selectionSort ===============
	Sorts list[0...last] by selecting smallest element 
	in unsorted portion of array and exchanging it with 
	element at the beginning of the unsorted list.
	   Pre    list must contain at least one item
	          last contains index to last element 
	   Post   list rearranged smallest to largest
	   Return count of exchanges
*/
// int selectionSort (int* list, int last)
int select_swap(int *xp, int *yp) 
{ 
    int temp = *xp; 
    *xp = *yp; 
    *yp = temp; 
} 
  
int selectionSort(int arr[], int n) 
{ 
    int i, j, min_idx, count=0; 
  
    // One by one move boundary of unsorted subarray 
    for (i = 0; i < n-1; i++) 
    { 
        // Find the minimum element in unsorted array 
        min_idx = i; 
        for (j = i+1; j < n; j++) 
          if (arr[j] < arr[min_idx]) 
            min_idx = j; 
  
        // Swap the found minimum element with the first element 
        select_swap(&arr[min_idx], &arr[i]); 
        count +=3;
    } 
    return count;
} 	// selectionSort

/*
Results:
Unsorted array:  89 72  3 15 21 57 61 44 19 98  5 77 39 59 61
Sorted array:     3  5 15 19 21 39 44 57 59 61 61 72 77 89 98
Total exchanges: 42
*/


/*	Test driver for sorting solutions. 
	   Written by: 90cos
	   Date: 2018

*/
#include <stdio.h>
#include <stdbool.h>
#define CMAX 15

// A utility function to swap two elements 
void quick_swap(int* a, int* b) 
{ 
	int t = *a; 
	*a = *b; 
	*b = t; 
} 

/* This function takes last element as pivot, places the pivot element at its correct position in sorted 
	array, and places all smaller (smaller than pivot) to left of pivot and all greater elements to right 
of pivot */
int partition (int arr[], int low, int high, int * count) 
{ 
	int pivot = arr[high]; // pivot 
	int i = (low - 1); // Index of smaller element 

	for (int j = low; j <= high- 1; j++) 
	{ 
		// If current element is smaller than the pivot 
		if (arr[j] < pivot) 
		{ 
			i++; // increment index of smaller element 
			quick_swap(&arr[i], &arr[j]); 
            *count +=3;
            printf("If: Count: %d \t Array: ", *count);
            printArray(arr, CMAX);
		} 
	} 
	quick_swap(&arr[i + 1], &arr[high]); 
    *count += 3;
    printf("For: Count: %d \t Array: ", *count);
    printArray(arr, CMAX);
	return (i + 1); 
} 

/* The main function that implements QuickSort 
arr[] --> Array to be sorted, 
low --> Starting index, 
high --> Ending index */
int * quickSort(int arr[], int low, int high, int * count) 
{ 
	if (low < high) 
	{ 
		/* pi is partitioning index, arr[p] is now at right place */
		int pi = partition(arr, low, high, count); 

		// Separately sort elements before partition and after partition 
		quickSort(arr, low, pi - 1, count); 
		quickSort(arr, pi + 1, high, count); 
	} 
    return count;
}

/*	================== quickSort =====================
	Array  data[left..right] sorted using recursion.
	   Pre    data is array to be sorted
	          left identifies first element in data
	          right identifies last element in data
	          count is exchange accumulator 
	   Post   array sorted

/*	Prototype Declarations 
void quickSort      (int *data,     int left, int right, int* count);
void quickInsertion (int* sortData, int  first, 
                     int  last,     int* count);
void medianLeft     (int* sortData, int  left,
                     int  right,    int* count);
	*/
int fix_quick ( void ) 
{
/*	Local Declarations */
	int countExch;
	int	ary[CMAX] = {89, 72, 3, 15, 21, 57, 61, 44, 19, 98, 5, 77, 39, 59, 61};

/*	Statements */
	printf( "Unsorted array: ");
	for (int i = 0; i < CMAX; i++ )
		printf( "%3d", ary[ i ] );	
    printf("\n");

	countExch = 0;
    quickSort (ary, 0, CMAX-1, &countExch);
	
	printf( "\nSorted array:   " );
	for (int i = 0; i < CMAX; i++)
		printf( "%3d", ary[ i ] );
	printf( "\n" );
	
	printf("Total exchanges: %d\n", countExch);
	return 0;
}	/* main */


/*	================== quickSort =====================
	Array  data[left..right] sorted using recursion.
	   Pre    data is array to be sorted
	          left identifies first element in data
	          right identifies last element in data
	          count is exchange accumulator 
	   Post   array sorted

void quickSort (int *data, int left, int right, int* count)
{
//// inser code here //////**********************************************************
	return;
}	// end quickSort

/*	================== quickInsertion ================== 
	Sort list[first...last] using insertion sort. The 
	list is divided into sorted and unsorted lists. With 
	each pass, first element in the unsorted list is 
	inserted into the sorted list using a variation 
	of insertion sort modified for use in quick sort.
	   Pre      list must contain at least one element
	            first is index to first element 
	            last is index to last element
	            count holds the number of exchanges
	   Post     list rearranged.

void quickInsertion (int* sortData, int  first, 
                     int  last,     int* count)

{
///// insert code here /////*******************************************************************
	return;
}	// end quickInsertion

/*	=================== medianLeft ==================== 
	Find median value in array, sortData[left..right], 
	and place it in the location sortData[left].
	   Pre    sortData is array of at least 3 elements
	          left and right are boundaries of the array
	   Post   median value  placed at sortData[left 
	          count holds the number of exchanges

void medianLeft (int* sortData, int  left,
                 int  right,    int* count)
{
///// insert code here //////***************************************************************
	return;
}	// medianLeft
*/


/*
Results:
Unsorted array:  89 72  3 15 21 57 61 44 19 98  5 77 39 59 61
Sorted array:     2  3  5 15 19 21 39 44 57 59 61 61 72 77 89
Total exchanges: 52
*/

int main()
{
    // bubble();
    // fix_bubble();
    // insert();
    // test_quick();
    // fix_insert();
    // fix_select();
    fix_quick();
    return 0;
}

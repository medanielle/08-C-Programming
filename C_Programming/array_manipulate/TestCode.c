#include <stdio.h>
#include <stdlib.h>
#include "TestCode.h"

/*


Write the function arrayManipulate that receives two parameters:
arr - a pointer to an array of integer 
size - an int indicating the size of the array

The function must iterate over the array using an integer pointer and pointer 
arithmetic (required) to access each element of the array and to possibly change 
the contents of the array. The contents will be changed according to the following:

If the value in the element is an even number and greater than six (6), then 
square the contents of the element.  For example, if the element originally contained 
a 12, it will now contain 144.

Otherwise, if the value in the element is an odd number or it is greater than two (2), 
then double the contents in the element. For example if the element originally 
contained a 5, it will now contain 10.

Once the array has been updated and fully iterated, sort the array in ascending order 
using any sorting algorithm.

Lastly, after sorting: 
	if the array has an even number of elements, the function should return the sum 
    of the middle two elements.  For example, if the array has eight (8) elements, 
    return the sum of the contents of element three(3) and four(4). 
    
	If the array has an odd number of elements, return the contents of just the middle element.

If the size passed to the array is less than 2, the function should return a -1.

*/
// Function to sort the numbers using pointers 

void display(int size, int* arr){
    int i, *ptr = arr;
    for ( i = 0; i < size; i++) {

        printf("%d ", *ptr);
        ptr++;
    }
    printf("\n");
}
void sort(int n, int* ptr) 
{ 
    int i, j, t; 
  
    // Sort the numbers using pointers 
    for (i = 0; i < n; i++) { 
  
        for (j = i + 1; j < n; j++) { 
  
            if (*(ptr + j) < *(ptr + i)) { 
  
                t = *(ptr + i); 
                *(ptr + i) = *(ptr + j); 
                *(ptr + j) = t; 
            } 
        } 
    } 
  
    // print the numbers 
    //for (i = 0; i < n; i++) 
    //    printf("%d ", *(ptr + i)); 
} 

int arrayManipulate(int *arr, int size)
{
    // If the size passed to the array is less than 2, 
    if (size <2){
        //the function should return a -1
        // print debug = printf("Return -1");
        return -1;
    }
    // intialize counter and pointer
    int  i, *ptr;

    /* let us have array address in pointer */
    ptr = arr;
	
    // iterate through array (via pointer arithmetic)
    for ( i = 0; i < size; i++) {
        //If the value in the element is an even number and greater than six (6)
        if (*ptr>6 && *ptr%2 == 0){
            // DEBUG printf("%d \t=> \t", *ptr);
            //then square the contents of the element.
            *ptr = (*ptr) * (*ptr);
            // DEBUG printf("%d \n", *ptr);
        }
        // Otherwise, if the value in the element is an odd number or it is greater than two (2)
        else if (*ptr%2 ==1 || *ptr >2){
            // DEBUG printf("%d \t=> \t", *ptr);
            //then double the contents in the element
            *ptr = (*ptr) * 2;
            // DEBUG printf("%d \n", *ptr);
        }

        /* move to the next location */
        ptr++;
    }
    // degbug print  =  display(size, arr);
    //sort the array in ascending order using any sorting algorithm.
    sort(size, arr);
    
    int num = 0;
    //if the array has an even number of elements, the function should return the sum of the middle two elements.
    if (size%2 == 0){
        num = size/2;
        // the function should return the sum of the middle two elements.
        // DEBUG printf("Return %d", arr[num]+arr[num-1]);
        return arr[num]+arr[num-1];
    }
    //If the array has an odd number of elements, return the contents of just the middle element.
    else{
        num = size/2;
        // DEBUG printf("Return %d", arr[num]);
        return arr[num];
    }
}

int main(){
    int size = 1;
    int x [] = {22};
    display(size, x);
    printf("%d", arrayManipulate(x, size));
}


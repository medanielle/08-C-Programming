/*Create a program to use pointer to pointer
Code a C program to exhibit the use of pointer to a pointer.

	Demonstrate use of pointer to a pointer
 */

#include <stdio.h>

int main()
{
    // Integer variable
    int num = 0;

    // Pointer to integer
    int * ptr = &num;

    // Pointer to integer pointer
    int **dub_ptr = &ptr;
    
    /* Change the value of num directly */
    num = 50;
    printf("num: %d @ %p\nptr: %d @ %p\ndub_ptr: %d @ %p\n", num, &num, *ptr, &ptr, **dub_ptr, &dub_ptr);

    /* Assigns 100 using pointer to integer */
    *ptr = 100;
    printf("num: %d @ %p\nptr: %d @ %p\ndub_ptr: %d @ %p\n", num, &num, *ptr, &ptr, **dub_ptr, &dub_ptr);

    /* Assigns 1000 using pointer to integer pointer */
    **dub_ptr = 1000;
    printf("num: %d @ %p\nptr: %d @ %p\ndub_ptr: %d @ %p\n", num, &num, *ptr, &ptr, **dub_ptr, &dub_ptr);
  

    return 0;
}


/*
 Example Output -

Value of num   = 10
Value pointed by ptr  = 10
Value pointed by dPtr = 10

Value of num   = 100
Value pointed by ptr  = 100
Value pointed by dPtr = 100

Value of num   = 1000
Value pointed by ptr  = 1000
Value pointed by dPtr = 1000
*/

#include <stdio.h>



int test_bin_search() {
int searchArrays[3][10] = {
        { -30, -28, -25, -23,-18, -16, -14, -7, -2, -1 },
        { 15, 25, 37, 41, 48, 63, 78, 102, 124, 234 },
        { -5, -3, 22, 35, 48, 52, 61, 73, 83, 96 }
};



BSearch(searchArrays[0], 0, 9, 63);
BSearch(searchArrays[1], 0, 9, 63);
BSearch(searchArrays[2], 0, 9, 52);

}

////////////////////////////////////////////////////////////////////////////
/*  This program prints a report that lists the average power         */
/*  output for the first day of the week, and so on.                  */

#include <stdio.h>
#define NCOLS 7
#define NROWS 8
#define FILENAME "power1.txt"

int test_power(void)
{
   /*  Define variables and function prototypes.  */
   double power_out[NROWS][NCOLS];
   int row, col;
   FILE *power;
   double col_ave(double x[NROWS][NCOLS], int col);

   /*  Open input file.  */
   power = fopen(FILENAME,"r");

   /*  Read data.  */
   for (row=0; row<NROWS; row++)
      for (col=0; col<NCOLS; col++)
         fscanf(power,"%lf",&power_out[row][col]);

   /*  Find column average for a given column.  */
   for (col = 0; col<NCOLS; col++)
   {
      printf("Day %i: Average Power Output in Megawatts:  %6.2f\n",
             col,col_ave(power_out,col));
   }

    /*  Exit program.  */
    return 0;
}

// C code to perform a sequential search of  x in arr[]. If x 
// is present then return its location, otherwise 
// return -1 

#include <stdio.h> 

int search(int arr[], int n, int x) 
{ 
    int i; 
    for (i = 0; i < n; i++) 
        if (arr[i] == x) 
            return i; 
    return -1; 
} 

int sequential_search(void) 
{ 
    int arr[] = { 2, 3, 4, 10, 40 }; 
    int x = 10; 
    int n = sizeof(arr) / sizeof(arr[0]); 
    int result = search(arr, n, x); 
    (result == -1) ? printf("Element is not present in array") 
                : printf("Element is present at index %d", 
                            result); 
    return 0; 
}
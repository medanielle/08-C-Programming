/*  This program prints a report that lists the average power         */
/*  output for the first day of the week, and so on.                  */

#include <stdio.h>
#define NCOLS 7
#define NROWS 8
#define FILENAME "power1.txt"

int main(void)
{
   /*  Define variables and function prototypes.  */
   double power_out[NROWS][NCOLS];
   int row, col;
   FILE *power;
   double col_ave(double x[][], int col);

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

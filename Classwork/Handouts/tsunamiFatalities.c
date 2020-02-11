/*  
Write a program to read the information in waves2.txt. 
Use the preceding structure and print a report with the total number 
of fatalities per year in the file. Use an output format similar 
to the following:

Information for Large Tsunamis from the 1990s
Year  Number of Fatalities
xxxx  xx



This program prints a report with the total number of fatalities          */
/*  per year using the data in the data file waves2.txt.                      */

#include <stdio.h>
#define FILENAME "waves2.txt"

/*  Define structure to represent a tsunami.  */
struct tsunami
{
   int mo, da, yr, fatalities;
   double max_height;
   char location[20];
};

int main(void)
{
   /*  Define and initialize variables.  */
   struct tsunami t1;
   FILE* waves;
   int sum = 0, prevYear = 0;

   /*  Read and process data from file.  */
   waves = fopen (FILENAME, "r");
   if (waves == NULL)
      printf("Error opening file\n");
   else
   {
      printf("Information for Large Tsunamis from the 1990s\n");
      printf("Year\tNumber of Fatalities\n");

      sum = 0;
      while (fscanf(waves,"%d %d %d %d %s %lf",&t1.mo,&t1.da,&t1.yr, 
	       &t1.fatalities,t1.location, &t1.max_height) == 6 )
      {
         if ( t1.yr == prevYear || prevYear == 0 )
            sum += t1.fatalities;
         else
         {
            printf("%d\t%d\n", prevYear, sum );
            sum = t1.fatalities;
         }
	  prevYear = t1.yr;
	}
		
      printf("%d\t%d\n", prevYear, sum );
      fclose(waves);
   }

   /*  Exit program.  */
   return 0;
}

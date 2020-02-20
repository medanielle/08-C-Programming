/******************************************************************************

Write a function classify_quads that receives:
    a two-dimensional array of integers,
    an int representing number of rows,
    and a pointer to a struct (defined in the Testcode.h).

Each row in the array represents the degree angles of a quadrilateral (four-side shape). Where 
indicies 0 and 2 are opposite angles, and 1 and 3 are opposite angles.

A valid quadrilateral's angles add up to 360.

Example  {{90,90,90,90},
          {160,70,30, 100},
          {110,70,10, 170}}

You are provided a struct with the following integer variables whose values
are all initialized to zero:

- rect - represents a rectangle (having all 90 degree angle) 
- para - represents a parallegram where both opposite angles are equal and is not
         a rect.
- quad - represents a valid quadrilateral that's not a rect or para
- invalid - any row whose angles do not add up to 360
          - any angle less than or equal to zero (0)
          - any angle greater than or equal to 360

The function should iterate through the two-dimensional array and process each row
to determine the type of quadrilateral is represented in each row, then increment
the appropriate varaible inside the struct representing the type of quadrilateral.


*******************************************************************************/

#include <stdio.h>
#include "TestCode.h"

void classify_quads(int quads[][4], int rows, struct QuadStruct *qds)
{
	
}

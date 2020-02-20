
#include <stdio.h>
#include <stdlib.h>
#include "TestCode.h"

/* 

Write the function refFunction that receives three int parameters. Two of these are passed to the
function by refernce ("first", "second"). The third parameter, "action", represents an action to 
take on the values passed in "first" and "second". The "action" variable should have either 
a 1, 2, or 3.

if action is:

1 - if "second" is smaller than "first", then swap the values in "first" and "second", otherwise
    do nothing.
2 - if "first" is smaller than "second", then swap the values in "first" and "second", otherwise
    do nothing
3 - multiply the value inside of "first" and "second" each by two (2)

if the "action" variable contains a value < 1 or > 3, assign 0 to both "first" and "second"

*/

void refFunction(int *first, int *second, int action)
{

}

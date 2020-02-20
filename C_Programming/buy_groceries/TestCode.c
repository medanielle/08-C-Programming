/* Write a function buyGroceries that accepts and int array and an int representing the size
of the array. Every two (2) indicies in the array represents an item number and quantity to purchase groceries.
The function will iterate the array and determine the total cost of groceries as a floating point number
based on the item number, quantity of each item, and cost of each item. There are four valid items.

item #  item   Cost
1       eggs   3.50
2       milk   2.25
3       bread  1.99
4       sugar  4.15

For example, the function may receive an array with the following:   1 5 2 3 4 4

resulting in 5 eggs at $3.50, 3 milks at $2.25 each, and 4 sugars at $4.15 each.

Compute a grand total based on quantity and cost of each item. If there is a quantity
of 5 or more for an item, a 5% discount is applied on those items. So, for the above
example there would be a 5% discount applied to the eggs.

Once the total is computed, round the value to an integer and return it.

The size passed for the array should always be an even number > 0, if it is not, the function
should return 0.

If any item number is not a 1, 2, 3, or 4, the function should return 0.

If any quantity is 0 or less, the function should return 0.

If a valid size is passed (even number) assume array is of that size.

Assume there will be no duplicate entries for an item number.

*/



#include <stdio.h>
#include <math.h>


int buyGroceries(int stuff[], int size)
{

	return 0;
}
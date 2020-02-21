/* 
Write a function buyGroceries that accepts and int array and an int representing the size
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

int check_list(int arr[], int size){
	//The size passed for the array should always be an even number > 0,
	if (size%2 != 0 || size < 0){
		//if it is not, the function should return 0
		// DEBUG printf("size bad!\n");
		return 1;
	}
	for(int i = 0; i< size; i++){
		// DEBUG  printf("%d\t", arr[i]);
		if(i%2 == 0){ //even
			// If any item number is not a 1, 2, 3, or 4
			if (arr[i]<=0 || arr[i]>=5){
				// the function should return 0
				// DEBUG printf("item num bad!\n");
				return 1;
			}
		}
		else{  // odd
			//If any quantity is 0 or less,
			if (arr[i]<=0){
				// the function should return 0
				// DEBUG printf("quantity bad!\n");
				return 1;
			}
		}
	}
	//printf("\n");
	return 0;
}
//Compute a grand total based on quantity and cost of each item. 
//If there is a quantity of 5 or more for an item, a 5% discount is applied on those items. 
int buyGroceries(int stuff[], int size)
{
	float prices[] = {3.50, 2.25, 1.99, 4.15};

	if (check_list(stuff, size)){
		return 0;
	}
	float subtotal, discount, total = 0.0;
	for(int i = 0; i< size; i+=2){
		float cost = 0, quant = 0;
		cost = prices[stuff[i]-1];
		quant = stuff[i+1];
		if (quant > 4){
			discount = (cost*quant) *.05;
			subtotal = (cost*quant) - discount;
			total += subtotal;
		}
		else{
			total += (cost*quant);
		}
		//printf("After: cost = %.2f \t quant = %.2f\t total = %.2f\n", cost, quant, total);
	}
	return round(total);
}
int main()
{
	int arr[] = {1, 5, 2, 3, 4, 4};
	int len = sizeof(arr)/sizeof(arr[0]);
	printf("Return %d\n", buyGroceries(arr, len));

	int edge[] = { 0 };
	printf("Return %d\n", buyGroceries(edge, 0)); // 0
	printf("Return %d\n", buyGroceries(edge, 1)); // 0
	printf("Return %d\n", buyGroceries(edge, 9)); // 0

	int stuff[] = { 1, 1, 2, 0 };
	printf("Return %d\n", buyGroceries(stuff, 4)); // 0
	
	int stuff2[] = { 1, 1, 0, 6 };
	printf("Return %d\n", buyGroceries(stuff2, 4)); // 0

	int stuff3[] = { 1, 1, 5, 1 };
	printf("Return %d\n", buyGroceries(stuff3, 4)); // 0

	int stuff4[] = { 1, 3, 2, 5, 4, 4 };
	printf("Return %d\n", buyGroceries(stuff4, 6)); // 38

	int stuff5[] = { 1, 5, 2, 5, 4, 5, 3, 5 }; 
	printf("Return %d\n", buyGroceries(stuff5, 8)); //56

	int stuff6[] = { 1, 1, 2, 1, 3, 1, 4, 1 }; 
	printf("Return %d\n", buyGroceries(stuff6, 8)); //12

	int stuff7[] = { 1, 6, 2, 7, 3, 8, 4, 15 };
	printf("Return %d\n", buyGroceries(stuff7, 8)); //109
}
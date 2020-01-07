#include <stdio.h>
#include <stdlib.h>
// Performance Labs

/*
Write a C program that accepts two integers from the user and calculate the product of the two integers. 
Test Data :
Input the first integer: 25
Input the second integer: 15
Expected Output:
```
Product of the above two integers = 375
```
*/

int product(){
    int num1, num2;
    printf("Enter first integer: ");
    scanf("%d", &num1);
    printf("Enter first integer: ");
    scanf("%d", &num2);

    printf("Product of the above two integers = %d ", num1 * num2);
}


/*
Write a C program that accepts an employee's ID, total worked hours of a month and the amount he received per hour. Print the employee's ID and salary (with two decimal places) of a particular month. 
Test Data :
Input the Employees ID(Max. 10 chars): 0342
Input the working hrs: 8
Salary amount/hr: 15000
Expected Output:
Employees ID = 0342
Salary = U$ 120000.00

Example output:
```
Input the Employees ID(Max. 10 chars): 0342                            
                                                                       
Input the working hrs: 8                                               
                                                                       
Salary amount/hr: 15000                                                
                                                                       
Employees ID = 0342                                                    
Salary = U$ 120000.00 
```
*/


// structure capable of holding remainer and quoitent 'div_t years, weeks'
int salary(){
    char empId[10];
    float hrs, rate;

    printf("Input the Employees ID(Max. 10 chars): ");
    scanf("%s", &empId);
    printf("\nInput the working hrs: ");
    scanf("%f", &hrs);
    printf("\nSalary amount/hr: ");
    scanf("%f", &rate);

    printf("\nEmployees ID = %s", empId);
    printf("\nSalary = $ %.2f", hrs * rate);

    return 0;
}


/*
Write a C program that accepts three integers and find the maximum of three. 
Test Data :
Input the first integer: 25
Input the second integer: 35
Input the third integer: 15
Expected Output:
```
Maximum value of three integers: 35
```
*/
#define MAX(a,b) (((a)>(b))?(a):(b))

int max_value(){
    int num1, num2, num3, maxVal;

    printf("Input the first integer: ");
    scanf("%d", &num1);

    printf("Input the second integer: ");
    scanf("%d", &num2);

    printf("Input the third integer: ");
    scanf("%d", &num3);

    maxVal = MAX(num1, num2);
    maxVal = MAX(maxVal, num3);

    printf("Maximum value of three integers: %d", maxVal);
    return 0; 
}

/*
Write a program that computes the volume of a sphere with a 10-meter radius, using teh formula v=4/3(Pi)r3. Write the fraction 4/3 as 4.0f/3.0f.(Try writing it as 4/3. What happens?) Hint: C doesn't have an exponentiation operator, so you'll need to multiply r by itself twice to compute r3.

Modify the program of the above problem so that it prompts the user to enter the radius of the sphere.
*/


/*
Write a program that asks the user to enter a dollars-and-cents amount, then displays the amount with 5% tax added:
```
Enter an amount: 100.00
With tax added: $105.00
*/



/*
Write a program that asks the user to enter a U.S. dollar amount and then shows how to pay that amount using the smallest number of $20, $10,$5, and $1 bills:

```
Enter a dollar amount: 93
$20 bills: 4
$10 bills: 1
$5  bills: 0
$1  bills: 3
```
Hint: divide the amount by 20 to determine the number of $20 bills needed, and then reduce the amount by the total value of the $20 bills. Repeat for the other bill sizes. Be sure to use integer values throughout, not floating-point numbers. 
*/



/*
Create a BMI calculator application that reads the user’s weight in pounds and height in inches (or, if you prefer, the user’s weight in kilograms and height in meters), then calculates and displays the user’s body mass index. Also, the application should display the following information from the Department of Health and Human Services/National Institutes of Health so the user can evaluate his/her BMI:
```
BMI VALUES
Underweight: less than 18.5
Normal:      between 18.5 and 24.9
Overweight:  between 25 and 29.9
Obese:       30 or greater
*/



/*
Research several car-pooling websites. Create an application that calculates your daily driving cost, so that you can estimate how much money could be saved by car pooling, which also has other advantages such as reducing carbon emissions and reducing traffic congestion. The application should input the following information and display the user’s cost per day of driving to work:

Total miles driven per day.

Cost per gallon of gasoline.

Average miles per gallon.

Parking fees per day.

Tolls per day.
*/



int main()
{
    //product();
    //salary();
    max_value();
    return 0;
}

/********************************************************/
/* 
 * C program to find maximum and minimum between two numbers or more numbers using functions
 */

#include <stdio.h>
#include <limits.h>
#include <stdarg.h>


/* Function declarations 
int max(int args, ...);
int min(int args, ...);
*/

/* MIAN FUNC
int main() 
{   
    /*
     * Demonstrate the use of variable argument list
    
    printf("Maximum of three numbers: (10, 30, 20) = %d\n", max(3, 10, 30, 20));
    printf("Maximum of five numbers: (5, -45, 4, 60, 100) = %d\n", max(5, -45, 4, 60, 100));
    
    printf("Minimum of four numbers: (-5, 0, 10, 50) = %d\n", min(4, -5, 0, 10, 50));
    printf("Minimum of two numbers: (10, 20) = %d", min(2, 10, 20));
    
    return 0;
}


/**
 * Find maximum between two or more integer variables
 * @param args Total number of integers
 * @param ... List of integer variables to find maximum
 * @return Maximum among all integers passed

int maxs(int args, ...)
{
    int i, max, cur;
    va_list valist;
    va_start(valist, args);
    
    max = INT_MIN;
    
    for(i=0; i<args; i++)
    {
        cur = va_arg(valist, int); // Get next elements in the list
        if(max < cur)
            max = cur;
    }
    
    va_end(valist); // Clean memory assigned by valist
    
    return max;
}

/**
 * Find minimum between two or more integer variables
 * @param args Total number of integers
 * @param ... List of integer variables to find minimum
 * @return Minimum among all integers passed

int mins(int args, ...) 
{
    int i, min, cur;
    va_list valist;
    va_start(valist, args);
    
    min = INT_MAX;
    
    for(i=0; i<args; i++)
    {
        cur = va_arg(valist, int);
        if(min > cur)
            min = cur;
    }
    
    va_end(valist);
    
    return min;
}
*/
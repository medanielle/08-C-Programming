#define _CRT_SECURE_NO_WARNINGS 1

#include <string.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>

/*
Using the function pointers techniques to allow the computation of the circumference of a circle, the area of a circle or the volume of a sphere.

Use an array of function pointers in which each pointer represents a function that returns double and receives two parameters:
 - radius: a double parameter
 - message:  a reference to char*
    Note: message is a char * passed by reference. Within each function populate
          this message with one of the following appropriate strings:
             "The circumference of a circle"
             "The area of a circle"
             "The volume of a sphere"
 
 The function names are:
    circumferene
    area
    volume

 Each function will return the computation rounded to 2 decimal points.
 

The functionChoice function will be called from the testcases to determine which
of the above functions will be called. This function receives three parameters:
    int choice (0 - circumference, 1 - area, 2 - volume)
    double radius (the radius of the shape)
    char ** message (an empty char* passed by reference to the function)

Notes:
   - circumference = 2*pi*radius
   - area = pi*radius^2
   - volume = 4.0/3.0 * pi * radius^ 3

*/



const float PI = 3.14;

double circumference(double radius, char** message)
{
   printf("1.5\n");
   *message = strdup("The circumference of a circle");
   printf("1.6\n");
	return 2 * PI * radius;
}

double area(double radius, char** message)
{
   *message = strdup( "The area of a circle");
	return PI * radius * radius;
}

double volume(double radius, char** message)
{
   *message = strdup( "The volume of a circle");
	return 4.0/3.0 * PI * radius * radius * radius;
}
double functionChoice(int choice, double radius, char** message)
{
   double (*my_func[3])(double radius, char** message) = { circumference, area, volume };
   double final = 0, val = 0;
   printf("1\n");
   val = my_func[choice](radius, message);
   final = roundf(val * 100) / 100;
   printf("1.7\n");
   printf("%s %lf\n", *message, final);
   return final;

}

int main() 
{ 
   char* message;
	double result = functionChoice(0, 10.5, &message);
   printf("Result: %s %.2lf\n\n", message, result);

   char* message2;
	double result2 = functionChoice(1, 10.5, &message2);
   printf("Result: %s %.2lf\n\n", message2, result2);

   char* message3;
	double result3 = functionChoice(2, 10.5, &message3); 
   printf("Result: %s %.2lf\n\n", message3, result3);

	return 0; 
} 



void test()
{
   char* message;
	double result = functionChoice(0, 10.5, &message);
	//strcmp("The circumference of a circle", message));
	//65.94, result);

   char* message2;
	double result2 = functionChoice(1, 10.5, &message2);
	//strcmp("The area of a circle", message));
	//346.19, result);

   char* message3;
	double result3 = functionChoice(2, 10.5, &message3); 
   //strcmp("The volume of a sphere", message));
	//4846.59, result);

}
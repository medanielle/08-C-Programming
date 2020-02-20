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





double circumference(double radius, char** message)
{
	return 0;
}

double area(double radius, char** message)
{
	return 0;
}

double volume(double radius, char** message)
{
	return 0;
}
double functionChoice(int choice, double radius, char** message)
{
	return 0;

}

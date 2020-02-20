#define _CRT_SECURE_NO_WARNINGS 1
#include <time.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include"TestCode.h"
/*
In this program, you’ll design a HealthProfile structure for a person. 
The structure’s members should include the person’s first name, last name, gender, 
date of birth (***another structure*** consisting of separate attributes for the month, day and year of birth), 
height (in inches), weight (in pounds), maxHeartRate, maxTargetRate, minTargetRate, BMI (Body Mass Index);


Your program should have a function that reads the data (first name, last name, gender, date of birth, height, weight) 
of 5 persons from a given file (PersonsData.txt) 
and uses it to set the members of a HealthProfile variable. 

The program also should include functions that calculate: 
   - the user’s age in years
   - maximum heart rate and target-heart-rate range, 
   - and body mass index (BMI). 

The formula for calculating your maximum heart rate in beats per minute is:
    maxHeartRate = 220 - your age in years. 

Your target heart rate is a range that’s 50–85% of your maximum heart rate:
     maxTargetRate = 0.85 * maxHeartRate;  
	 minTargetRate = 0.50 * maxHeartRate;  

The formulas for calculating BMI is 
   BMI = (weightInPounds × 703)/ (heightInInches × heightInInches)

 NOTES:
  - Round maxTargetRate to 2 decimal numbers
  - Round minTargetRate to 2 decimal numbers
  - Round BMI to 1 decimal number

The program will include a function: HealthProfile* computeHealthProfiles(int*& agesInYears)
The function will return the health profiles of all persons after the calucations of maximum heart rate,  maxTargetRate, minTargetRate, and BMI
The function also will receive an array of integers to return the ages of all users in years. 
Note that the ages of the persons will depend on the current date, so the array agesInYears will return the current ages of the persons. 

*/

HealthProfile healthDatabase[NUMBER_OF_PERSONS];

void readData()
{
	
}

int calculateAgeInYears(HealthProfile hp)
{

	return 0;
}
double calculateBMI(HealthProfile hp)
{

	return 0.0;
}

HealthProfile* computeHealthProfiles(int** agesInYears)
{
	
	return healthDatabase;
}
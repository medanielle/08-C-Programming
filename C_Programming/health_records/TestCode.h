#pragma once


#include <stdio.h>

#define NAME_LENGTH 15
#define NUMBER_OF_PERSONS 5
#define LINE_LENGTH 80

typedef struct BirthDate
{
	int month; // birth month
	int day; // birth day
	int year; // birth year
} BirthDate;

typedef struct HealthProfile
{
	char firstName[NAME_LENGTH];
	char lastName[NAME_LENGTH];
	char gender;
	BirthDate dateOfBirth;
	int height; // height in inches
	int weight;  // weight in pounds
	int maxHeartRate;
	double maxTargetRate;
	double minTargetRate;
	double BMI;
} HealthProfile;

void readData();


#ifdef __cplusplus
extern "C" {
#endif
	// Task One
	HealthProfile* computeHealthProfiles(int** agesInYears);

#ifdef __cplusplus
}
#endif
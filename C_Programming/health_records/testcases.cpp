#include <gmock/gmock.h>


#include "TestCode.h"


/*
01 09 1965
12 08 1955
07 31 1972
11 10 1973
06 20 1941*/

TEST(TestCase1, computeHealthProfilesTest)
{
	HealthProfile* healthDatabase;
	int* ages;
	healthDatabase = computeHealthProfiles(&ages);

	ASSERT_EQ(0, strcmp("John", healthDatabase[0].firstName));
	ASSERT_EQ(0, strcmp("Smith", healthDatabase[0].lastName));
	ASSERT_EQ('M', healthDatabase[0].gender);
	ASSERT_EQ(1965, healthDatabase[0].dateOfBirth.year);
	ASSERT_EQ(1, healthDatabase[0].dateOfBirth.month);
	ASSERT_EQ(9, healthDatabase[0].dateOfBirth.day);
	ASSERT_EQ(20.3, healthDatabase[0].BMI);

	ASSERT_EQ(0, strcmp("Franklin", healthDatabase[1].firstName));
	ASSERT_EQ(0, strcmp("Wong", healthDatabase[1].lastName));
	ASSERT_EQ('M', healthDatabase[1].gender);
	ASSERT_EQ(1955, healthDatabase[1].dateOfBirth.year);
	ASSERT_EQ(12, healthDatabase[1].dateOfBirth.month);
	ASSERT_EQ(8, healthDatabase[1].dateOfBirth.day);
	ASSERT_EQ(33.4, healthDatabase[1].BMI);

	ASSERT_EQ(0, strcmp("Joyce", healthDatabase[2].firstName));
	ASSERT_EQ(0, strcmp("English", healthDatabase[2].lastName));
	ASSERT_EQ('F', healthDatabase[2].gender);
	ASSERT_EQ(1972, healthDatabase[2].dateOfBirth.year);
	ASSERT_EQ(7, healthDatabase[2].dateOfBirth.month);
	ASSERT_EQ(31, healthDatabase[2].dateOfBirth.day);
	ASSERT_EQ(24.3, healthDatabase[2].BMI);

	ASSERT_EQ(0, strcmp("James", healthDatabase[3].firstName));
	ASSERT_EQ(0, strcmp("Borg", healthDatabase[3].lastName));
	ASSERT_EQ('M', healthDatabase[3].gender);
	ASSERT_EQ(1973, healthDatabase[3].dateOfBirth.year);
	ASSERT_EQ(11, healthDatabase[3].dateOfBirth.month);
	ASSERT_EQ(10, healthDatabase[3].dateOfBirth.day);
	ASSERT_EQ(53.7, healthDatabase[3].BMI);

	ASSERT_EQ(0, strcmp("Jennifer", healthDatabase[4].firstName));
	ASSERT_EQ(0, strcmp("Wallance", healthDatabase[4].lastName));
	ASSERT_EQ('F', healthDatabase[4].gender);
	ASSERT_EQ(1941, healthDatabase[4].dateOfBirth.year);
	ASSERT_EQ(6, healthDatabase[4].dateOfBirth.month);
	ASSERT_EQ(20, healthDatabase[4].dateOfBirth.day);
	ASSERT_EQ(33.4, healthDatabase[4].BMI);


	for (int i = 0; i < 5; i++)
	{
		int maxHeartRate = 220 - ages[i];
		double maxTR = round(0.85 * maxHeartRate*100)/100;
		double minTR = round(0.50 * maxHeartRate*100)/100;

		ASSERT_EQ(maxHeartRate, healthDatabase[i].maxHeartRate);
		ASSERT_EQ(maxTR, healthDatabase[i].maxTargetRate);
		ASSERT_EQ(minTR, healthDatabase[i].minTargetRate);
	}
	

}



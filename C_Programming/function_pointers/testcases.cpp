#include <gmock/gmock.h>

#include "TestCode.h"

// CProgrammingTests.cpp : Defines the entry point for the console application.
#define _CRT_SECURE_NO_WARNINGS 1
#define _SILENCE_TR1_NAMESPACE_DEPRECATION_WARNING 1


TEST(TestCase0, functionChoice0)
{
	char* message;
	double result = functionChoice(0, 10.5, &message);
	ASSERT_EQ(0, strcmp("The circumference of a circle", message));
	ASSERT_EQ(65.94, result);

}

TEST(TestCase1, functionChoice1)
{
	char* message;
	double result = functionChoice(1, 10.5, &message);
	ASSERT_EQ(0, strcmp("The area of a circle", message));
	ASSERT_EQ(346.19, result);

}

TEST(TestCase2, functionChoice2)
{
	char* message;
	double result = functionChoice(2, 10.5, &message);
	ASSERT_EQ(0, strcmp("The volume of a sphere", message));
	ASSERT_EQ(4846.59, result);

}



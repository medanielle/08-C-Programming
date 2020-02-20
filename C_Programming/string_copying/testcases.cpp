#include <gmock/gmock.h>


#include "TestCode.h"


#define SIZE 10

TEST(TestCase1, copy1Test)
{
	char string1[SIZE];
	char *string2 = "H";
	copy1(string1, string2);
	ASSERT_EQ(0, strcmp("H", string1));

	char *string3 = "Hello";
	copy1(string1, string3);
	ASSERT_EQ(0, strcmp("Hello", string1));
}

TEST(TestCase2, copy2Test)
{
	char string1[SIZE];
	char string2[] = "G";

	copy2(string1, string2);
	ASSERT_EQ(0, strcmp("G", string1));

	char string3[] = "Good Bye";
	copy2(string1, string3);
	ASSERT_EQ(0, strcmp("Good Bye", string1));
}

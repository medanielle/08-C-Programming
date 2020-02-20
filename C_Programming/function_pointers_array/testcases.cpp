#include <gmock/gmock.h>


#include <string.h>
#include "TestCode.h"


TEST(TestCase2, functionPointerTest_normalCases)
{

	ASSERT_EQ(0, strcmp("John Hancock",(processName(1, "John", "Hancock"))));
	ASSERT_EQ(0, strcmp("Hancock, John", (processName(2, "John", "Hancock"))));
	ASSERT_EQ(0, strcmp("JH", (processName(0, "John", "Hancock"))));
	ASSERT_EQ(0, strcmp("", (processName(3, "John", "Hancock"))));
	ASSERT_EQ(0, strcmp("", (processName(1, "", "Hancock"))));
	ASSERT_EQ(0, strcmp("", (processName(2, "John", ""))));
	ASSERT_EQ(0, strcmp("John Hancock", (processName(1, "john", "hancock"))));
	ASSERT_EQ(0, strcmp("Hancock, John", (processName(2, "john", "hancock"))));
	ASSERT_EQ(0, strcmp("JH", (processName(0, "john", "hancock"))));
}
#include <gmock/gmock.h>


#include "TestCode.h"


TEST(TestCase1, extractNumbers_cornerCases)
{
	char str[] = "";

	ASSERT_EQ(0, extractAndAddNumbers(str));

}


TEST(TestCase2, extractNumbers_normalCases)
{

	char str[] = "abc1307sfaskfsjadfja34kdsfljakfslkjflksjf902";

	ASSERT_EQ(2243, extractAndAddNumbers(str));

	char str2[] = "i want to 10 add these 20 numbers up 30 to get total";

	ASSERT_EQ(60, extractAndAddNumbers(str2));

	char str3[] = "i want to 10 add these numbers up to get total";

	ASSERT_EQ(10, extractAndAddNumbers(str3));

	char str4[] = "i want to add these numbers up to get total";

	ASSERT_EQ(0, extractAndAddNumbers(str4));
}
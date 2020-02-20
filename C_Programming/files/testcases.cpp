#include <gmock/gmock.h>


#include "TestCode.h"


TEST(TestCase1, FileTest_cornerCases)
{
	int state = 0;
	int stats[2] = { 0 };
	ASSERT_EQ(ERROR_INVALID_DATA, findStats(state, stats));
	state = 4;
	ASSERT_EQ(ERROR_FILE_INVALID, findStats(state, stats));
	state = 3;
	ASSERT_EQ(ERROR_INVALID_DATA, findStats(state, stats));
}

TEST(TestCase1, FileTest_normalCases)
{
	int state = 1;
	int stats[2] = { 0 };
	int res[] = { 123,67 };
	ASSERT_EQ(ERROR_SUCCESS, findStats(state, stats));

	for (int i = 0; i < 2; i++)
	{
		ASSERT_EQ(res[i], stats[i]);
	}
	state = 2;
	int stats2[2] = { 0 };
	int res2[] = { 255,74 };
	ASSERT_EQ(ERROR_SUCCESS, findStats(state, stats2));

	for (int i = 0; i < 2; i++)
	{
		ASSERT_EQ(res2[i], stats2[i]);
	}
	
}
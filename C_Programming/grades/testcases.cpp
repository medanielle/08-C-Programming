#include <gmock/gmock.h>


#include "TestCode.h"


TEST(TestCase5, computeScoreTest_cornerCases)
{

	int final[] = { 105, 89, 89 };
	int mid[] = { 89, -5, 90 };

	int proj[][6] = { { 88, 78, 98, 92, 70, 92 },
					 { 89, 89, 89, 89, 89, 89 },
					 { 89, 89, 89, 89, 101, 89 } };

	int quiz[][4] = { {80, 85, 95, -1 },
					{ 89, 89, 89, 89 },
					{ 89, 89, 89, 89 } };


	ASSERT_EQ(ERROR_INVALID_DATA, computeScore(final[2], mid[2], proj[2], quiz[2]));
	ASSERT_EQ(ERROR_INVALID_DATA, computeScore(final[2], mid[2], proj[1], quiz[0]));
	ASSERT_EQ(ERROR_INVALID_DATA, computeScore(final[0], mid[2], proj[0], quiz[2]));
	ASSERT_EQ(ERROR_INVALID_DATA, computeScore(final[2], mid[1], proj[0], quiz[2]));
}


TEST(TestCase5, computeScoreTest_normalCases)
{
	int final[] = { 95, 89, 57 };
	int mid[] = {89, 89, 82};

	int proj[][6] = { { 88, 78, 98, 92, 70, 92 },
					 { 89, 89, 89, 89, 89, 89 },
					 { 77, 64, 54, 89, 90, 85 } };

	int quiz[][4] = { {80, 85, 95, 97 },
					{ 89, 89, 89, 89 },
					{ 74, 69, 80, 81 } };

	ASSERT_EQ(91, computeScore(final[0], mid[0], proj[0], quiz[0]));
	ASSERT_EQ(89, computeScore(final[1], mid[1], proj[1], quiz[1]));
	ASSERT_EQ(73, computeScore(final[2], mid[2], proj[2], quiz[2]));
}
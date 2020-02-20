#include <gmock/gmock.h>


#include "TestCode.h"


TEST(TestCase5, reverseBitsTest_cornerCases)
{

	char* reversedList[] = {
		"00000000000000000000000000000000",
		"10000000000000000000000000000000",
		"00000000000000000000000000000001",
		"11111111111111111111111111111111",
		"11111111111111111111111111111111"
	};

	ASSERT_EQ(0, strcmp(reversedList[0], reverseBits(0)));
	ASSERT_EQ(0, strcmp(reversedList[1], reverseBits(1)));
	ASSERT_EQ(0, strcmp(reversedList[2], reverseBits(2147483648)));
	ASSERT_EQ(0, strcmp(reversedList[3], reverseBits(-1)));
	ASSERT_EQ(0, strcmp(reversedList[4], reverseBits(4294967295)));
}


TEST(TestCase5, reverseBitsTest_normalCases)
{
	char* reversedList[] = {
		"00110000000000000000000000000000",
		"00000000000000000000000000001100",
		"01010000000000000000000000000000",
		"00000000000000000000000000001010",
		"11101011011110000000000000000000",
		"00000000000000000001111011010111"
	};

	ASSERT_EQ(0, strcmp(reversedList[0], reverseBits(12)));
	ASSERT_EQ(0, strcmp(reversedList[1], reverseBits(805306368)));
	ASSERT_EQ(0, strcmp(reversedList[2], reverseBits(10)));
	ASSERT_EQ(0, strcmp(reversedList[3], reverseBits(1342177280)));
	ASSERT_EQ(0, strcmp(reversedList[4], reverseBits(7895)));
	ASSERT_EQ(0, strcmp(reversedList[5], reverseBits(3950510080)));

}
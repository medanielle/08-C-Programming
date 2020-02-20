#include <gmock/gmock.h>


#include "TestCode.h"


TEST(TestCase1, packCharactersTest_cornerCases)
{

	ASSERT_EQ(0, packCharacters(NULL, NULL, NULL, NULL));
	ASSERT_EQ(32, packCharacters(NULL, NULL, NULL, ' '));
	ASSERT_EQ(8224, packCharacters(NULL, NULL, ' ', ' '));
	ASSERT_EQ(538976256, packCharacters(' ', ' ', ' ', NULL));
	ASSERT_EQ(538976288, packCharacters(' ', ' ', ' ', ' '));
}

TEST(TestCase2, packCharactersTest_normalCases)
{

	ASSERT_EQ(875770417, packCharacters('4', '3', '2', '1'));
	ASSERT_EQ(1684234849, packCharacters('d', 'c', 'b', 'a'));
	ASSERT_EQ(791293227, packCharacters('/', '*', '-', '+'));
}


TEST(TestCase3, unpackCharactersTest_cornerCases)
{

	int numberList[] = { 32, 8224, 2105376, 538976288, 536870944 };
	char unPackedCharacters[6][4] = {
		{ '\0', '\0', '\0', ' ' },
		{ '\0', '\0', ' ', ' ' },
		{ '\0', ' ', ' ', ' ' },
		{ ' ', ' ', ' ', ' ' },
		{ ' ', '\0', '\0', ' ' }
	};
	bool equalValues;
	char* resultArray;

	ASSERT_EQ(NULL, unpackCharacters(0));
	for (int i = 0; i<5; i++)
	{
		resultArray = unpackCharacters(numberList[i]);
		ASSERT_TRUE(resultArray);
		equalValues = true;

		for (int j = 0; j < 4; j++)
			if (unPackedCharacters[i][j] != resultArray[j])
			{
				equalValues = false;
				break;
			}

		ASSERT_EQ(equalValues, true);
		
	}
}

TEST(TestCase4, unpackCharactersTest_normalCases)
{

	int numberList[] = { 875770417, 1684234849, 791293227 };
	char unPackedCharacters[6][4] = {
		{ '4', '3', '2', '1' },
		{ 'd', 'c', 'b', 'a' },
		{ '/', '*', '-', '+' }
	};
	bool equalValues;
	char* resultArray;


	for (int i = 0; i < 3; i++)
	{
		resultArray = unpackCharacters(numberList[i]);
		equalValues = true;

		ASSERT_TRUE(resultArray);
		for (int j = 0; j < 4; j++)
			if (unPackedCharacters[i][j] != resultArray[j])
			{
				equalValues = false;
				break;
			}

		ASSERT_EQ(equalValues, true);
	}
}
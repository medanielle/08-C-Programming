#include <gmock/gmock.h>


#include "TestCode.h"




TEST(TestCase1, getModeTest)
{
	const int SIZE = 15;


	int* arr1 = new int[SIZE] { 1, 3, 3, 3, 2, 2, 1, 3, 4, 5, 8, 8, 9, 3, 2 };
	int* arr2 = new int[SIZE] { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1 };
	int* arr3 = new int[SIZE] { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15 };
	int* arr4 = new int[SIZE] { 1, 4, 2, 6, 7, 2, 4, 3, 4, 5, 4, 4, 9, 3, 4 };

	ASSERT_EQ(3, getMode(arr1, SIZE));
	ASSERT_EQ(1, getMode(arr2, SIZE));
	ASSERT_EQ(-1, getMode(arr3, SIZE));
	ASSERT_EQ(4, getMode(arr4, SIZE));
}

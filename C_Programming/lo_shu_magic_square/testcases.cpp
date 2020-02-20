#include <gmock/gmock.h>


#include "TestCode.h"




TEST(TestCase1, isMagicSquareTest)
{
	int sqauer1[ROWS][COLS] = { { 4, 9, 2 },
								{ 3, 5, 7 },
								{ 8, 1, 6 } };

	int sqauer2[ROWS][COLS] = { { 8, 3, 4 },
								{ 1, 5, 9 },
								{ 6, 7, 2 } };

	int sqauer3[ROWS][COLS] = { { 6, 1, 8 },
								{ 7, 5, 3 },
								{ 2, 9, 4 } };

	int sqauer4[ROWS][COLS] = { { 0, 0, 0 },
								{ 0, 0, 0 },
								{ 0, 0, 0 } };

	int sqauer5[ROWS][COLS] = { { 1, 1, 1 },
								{ 1, 1, 1 },
								{ 1, 1, 1 } };

	int sqauer6[ROWS][COLS] = { { 1, 0, 0 },
								{ 0, 1, 0 },
								{ 0, 0, 1 } };

	int sqauer7[ROWS][COLS] = { { 10, 2, 3 },
								{ 4, 15, 6 },
								{ 7, 8, -8 } };



	ASSERT_EQ(true, isMagicSquare(sqauer1));
	ASSERT_EQ(true, isMagicSquare(sqauer2));
	ASSERT_EQ(true, isMagicSquare(sqauer3));
	ASSERT_EQ(false, isMagicSquare(sqauer4));
	ASSERT_EQ(false, isMagicSquare(sqauer5));
	ASSERT_EQ(false, isMagicSquare(sqauer6));
	ASSERT_EQ(false, isMagicSquare(sqauer7));



}
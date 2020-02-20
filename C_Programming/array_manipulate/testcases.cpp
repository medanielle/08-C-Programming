#include <gmock/gmock.h>


#include "TestCode.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>


	

TEST(TestCase1, checkArray)
{
	int size = 10;
    	int x [] = {2, 5, 6, 7, 8, 9, 12, 3, 1, 18};
    	int y [] = {2, 2, 6, 10, 12, 14, 18, 64, 144, 324};
    	int z = arrayManipulate(x, size);

	ASSERT_EQ(z, 26);

	for (int i = 0; i < size; i++)
	{
		ASSERT_EQ(x[i], y[i]);
	}

	size = 9;
    	int a [] = {22, 15, 6, 7, 8, 9, 12, 3, 18};
    	int b [] = {6, 12, 14, 18, 30, 64, 144, 324, 484};
    	z = arrayManipulate(a, size);

	ASSERT_EQ(z, 30);

	for (int i = 0; i < size; i++)
	{
		ASSERT_EQ(a[i], b[i]);
	}

    	z = arrayManipulate(x, 1);

	ASSERT_EQ(z, -1);

    	z = arrayManipulate(x, 0);

	ASSERT_EQ(z, -1);

    size = 2;
    int c [] = {22, 0};
    int d [] = {0,484};
    z = arrayManipulate(c, size);

	ASSERT_EQ(z, 484);

	for (int i = 0; i < size; i++)
	{
		ASSERT_EQ(c[i], d[i]);
	}

}






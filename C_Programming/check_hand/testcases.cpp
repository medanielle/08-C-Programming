#include <gmock/gmock.h>


#include "TestCode.h"


	
#define SIZE 10

TEST(TestCase1, checkHandTest)
{
	int h1[] = { 3,5,6,7,8 };
	int h2[] = { 2,3,4,5,6 };
	int h3[] = { 7,7,7,7,1 };
	int h4[] = { 1,7,7,7,7 };
	int h5[] = { 10,10,10,2,2 };
	int h6[] = { 10,10,5,10,8 };
	int h7[] = { 2,10,2,10,2 };
	int h8[] = { 13,9,11,12,10};
	int h9[] = { 1,1,10,2,2 };
	int h10[] = { 0,10,10,2,2 };
	int h11[] = { 10,10,10,2,20 };
	int h12[] = { 10,10,10,2,10 };
	ASSERT_EQ(0, strcmp("nothing", checkHand(h1)));
	ASSERT_EQ(0, strcmp("four", checkHand(h3)));
	ASSERT_EQ(0, strcmp("straight", checkHand(h2)));
	ASSERT_EQ(0, strcmp("four", checkHand(h4)));
	ASSERT_EQ(0, strcmp("three", checkHand(h5)));
	ASSERT_EQ(0, strcmp("three", checkHand(h6)));
	ASSERT_EQ(0, strcmp("three", checkHand(h7)));
	ASSERT_EQ(0, strcmp("straight", checkHand(h8)));
	ASSERT_EQ(0, strcmp("nothing", checkHand(h9)));
	ASSERT_EQ(0, strcmp("invalid", checkHand(h10)));
	ASSERT_EQ(0, strcmp("invalid", checkHand(h11)));
	ASSERT_EQ(0, strcmp("four", checkHand(h12)));
}


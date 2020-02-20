#include <gmock/gmock.h>


#include "TestCode.h"


	
#define SIZE 10

TEST(TestCase1, checkAmountTest)
{
	char* wordsCheckValue = checkAmount(0.52);
	ASSERT_EQ(0, strcmp("ZERO and 52/100", wordsCheckValue));

	wordsCheckValue = checkAmount(7);
	ASSERT_EQ(0, strcmp("SEVEN and 0/100", wordsCheckValue));

	wordsCheckValue = checkAmount(40);
	ASSERT_EQ(0, strcmp("FORTY and 0/100", wordsCheckValue));

	wordsCheckValue = checkAmount(32.00);
	ASSERT_EQ(0, strcmp("THIRTY TWO and 0/100", wordsCheckValue));

	wordsCheckValue = checkAmount(9.64);
	ASSERT_EQ(0, strcmp("NINE and 64/100", wordsCheckValue));

	wordsCheckValue = checkAmount(52.43);
	ASSERT_EQ(0, strcmp("FIFTY TWO and 43/100", wordsCheckValue));

	wordsCheckValue = checkAmount(99.99);
	ASSERT_EQ(0, strcmp("NINETY NINE and 99/100", wordsCheckValue));
}


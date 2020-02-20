#include <gmock/gmock.h>


#include "TestCode.h"


	
#define SIZE 10

TEST(TestCase1, checkHandTest)
{
	int res = palindrome("Able was I ere I saw Elba.");
	ASSERT_EQ(res, 1);

	res = palindrome("A nut for a jar of tuna");
	ASSERT_EQ(res, 1);
	res = palindrome("Taco cat");
	ASSERT_EQ(res, 1);
	res = palindrome("Was it a car or a cat I saw ?");
	ASSERT_EQ(res, 1);
	res = palindrome("Ed, I saw Harpo Marx ram Oprah W.aside.");
	ASSERT_EQ(res, 1);
	res = palindrome("abcdcba");
	ASSERT_EQ(res, 1);
	res = palindrome("This is not a palindrome.");
	ASSERT_EQ(res, 0);
	res = palindrome("abababababababab");
	ASSERT_EQ(res, 0);
}


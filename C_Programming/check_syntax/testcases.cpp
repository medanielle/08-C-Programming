#include <gmock/gmock.h>


#include "TestCode.h"


TEST(TestCase5, checkSyntaxTest_cornerCases)
{
	char stack[50] = { 0 };
	char * code = "The([{(some code)}]";

	ASSERT_EQ(ERROR_INVALID_BLOCK, validateSyntax(code, stack));
	char * code2 = "";
	ASSERT_EQ(ERROR_INVALID_DATA, validateSyntax(code2, stack));

	char stack2[50] = { 0 };
	char * code3 = "The([{(some code)]})";

	ASSERT_EQ(ERROR_INVALID_BLOCK, validateSyntax(code3, stack));
}


TEST(TestCase5, checkSyntaxTest_normalCases)
{

	char stack[50] = { 0 };
	char * code = "The([{(some code)}])";

    ASSERT_EQ(ERROR_SUCCESS, validateSyntax(code, stack));
	char stack2[50] = { 0 };
	char * code2 = "for (int i = 0; i < 4; i++)	{ total += .05 * quiz[i]; } for (int i = 0; i < 6; i++) { if (i != low) { total += .05 * project[i];}}";

	ASSERT_EQ(ERROR_SUCCESS, validateSyntax(code2, stack2));
}
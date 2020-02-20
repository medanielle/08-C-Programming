#include <gmock/gmock.h>


#include "TestCode.h"


TEST(TestCase1, fixSpacesTest_cornerCases)
{

	char *sentence = "";
	ASSERT_EQ(0, strcmp("", spaceFixer(sentence)));
	sentence = NULL;
	ASSERT_EQ(0, strcmp("", spaceFixer(sentence)));
}


TEST(TestCase2, fixSpacesTest_normalCases)
{


		char *sentence = "Yesterday, all my trouble seemed so far away.Now they are here to stay.      Do I believe in yesterday? Suddenly, yes.   ";
		char *fixed = "Yesterday, all my trouble seemed so far away.  Now they are here to stay.  Do I believe in yesterday?  Suddenly, yes.";
		char *res1 = spaceFixer(sentence);


		ASSERT_EQ(0, strcmp(res1, fixed));

		char *sent2 = "This long paragraph has exactly 200 characters.      If you don�t allocate memory correctly then you�ll get a buffer overflow.     Buffer overflows can be caused if you go beyond the last index of the array.";
		char *fixed2 = "This long paragraph has exactly 200 characters.  If you don�t allocate memory correctly then you�ll get a buffer overflow.  Buffer overflows can be caused if you go beyond the last index of the array.";
	
		char * res2 = spaceFixer(sent2);

		ASSERT_EQ(0, strcmp(res2, fixed2));
}
#include <gmock/gmock.h>


#include "TestCode.h"


TEST(TestCase1, encodePigLatinPhraseTest_cornerCases)
{

	char * englishPharase = "";
	char * pigLatinPhrase = encodePigLatinPhrase(englishPharase);
	ASSERT_EQ(0, strcmp("", pigLatinPhrase));

	englishPharase = " ";
	pigLatinPhrase = encodePigLatinPhrase(englishPharase);
	ASSERT_EQ(0, strcmp("", pigLatinPhrase));

	englishPharase = "       ";
	pigLatinPhrase = encodePigLatinPhrase(englishPharase);
	ASSERT_EQ(0, strcmp("", pigLatinPhrase));

	englishPharase = "word";
	pigLatinPhrase = encodePigLatinPhrase(englishPharase);
	ASSERT_EQ(0, strcmp("ordway", pigLatinPhrase));

}

TEST(TestCase2, encodePigLatinPhraseTest_normalCases)
{
	char * englishPharase = "I study computer science";
	char * pigLatinPhrase = encodePigLatinPhrase(englishPharase);
	ASSERT_EQ(0, strcmp("Iay tudysay omputercay ciencesay", pigLatinPhrase));

}





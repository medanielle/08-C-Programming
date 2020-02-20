#include <gmock/gmock.h>


#include "TestCode.h"


	
#define SIZE 10

TEST(TestCase1, checkMakeSentenceTest)
{
	ASSERT_EQ(0, strcmp("The quick brown fox jumped over the lazy dog's back.", makeSentence("TheQuickBrownFoxJumpedOverTheLazyDog'sBack")));
	ASSERT_EQ(0, strcmp("Who is the man?", makeSentence("WhoIsTheMan")));
	ASSERT_EQ(0, strcmp("William is the so called prince.", makeSentence("WilliamIsTheSoCalledPrince")));
	ASSERT_EQ(0, strcmp("What is your name?", makeSentence("WhatIsYourName")));
	ASSERT_EQ(0, strcmp("How did you do that?", makeSentence("HowDidYouDoThat")));
	ASSERT_EQ(0, strcmp("Whistle while you work.", makeSentence("WhistleWhileYouWork")));
	ASSERT_EQ(0, strcmp("Why is this a question?", makeSentence("WhyIsThisAQuestion")));
	ASSERT_EQ(0, strcmp("I love c programming problems.", makeSentence("ILoveCProgrammingProblems")));
	ASSERT_EQ(0, strcmp("Where is waldo?", makeSentence("WhereIsWaldo")));
	ASSERT_EQ(0, strcmp("When will this ever end?", makeSentence("WhenWillThisEverEnd")));
}


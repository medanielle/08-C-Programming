#include <gmock/gmock.h>


#include "TestCode.h"


TEST(TestCase1, MakeParaTest_cornerCases)
{
	char *sents[] = { "There was a very tall castle.1",
		   "",
		   "When all was said and done, they lived happily ever after.9",
		   "In the castle lived a mild-mannered computer programmer.2",
		   "The programmer was very lonely because his computer recently broke.3",
		   "After quickly setting it up and plugging it in, code slinging commenced.7",
		   "It was love at first keyboard!8",
		   "In the box was a brand-new computer.6",
		   "The programmer opened the closet and saw a box from Amazon.5",
		   "One day the programmer came across a room with a closet.4" };

	
	char * res = makeParagraph(sents, 10);
	ASSERT_EQ(0, strcmp("INVALID", res));
}

TEST(TestCase2, MakeParaTest_normalCases)
{
	char *sents[] = { "There was a very tall castle.1",
			   "Once upon a time.0",
			   "When all was said and done, they lived happily ever after.9",
			   "In the castle lived a mild-mannered computer programmer.2",
			   "The programmer was very lonely because his computer recently broke.3",
			   "After quickly setting it up and plugging it in, code slinging commenced.7",
			   "It was love at first keyboard!8",
			   "In the box was a brand-new computer.6",
			   "The programmer opened the closet and saw a box from Amazon.5",
			   "One day the programmer came across a room with a closet.4" };

	char *para = "Once upon a time. There was a very tall castle. In the castle lived a mild-mannered computer programmer. The programmer was very lonely because his computer recently broke. One day the programmer came across a room with a closet. The programmer opened the closet and saw a box from Amazon. In the box was a brand-new computer. After quickly setting it up and plugging it in, code slinging commenced. It was love at first keyboard! When all was said and done, they lived happily ever after.";

	ASSERT_EQ(0, strcmp(para, makeParagraph(sents, 10)));

	char *sents2[] = { "There was a very tall castle.1",
			   "Once upon a time.0",
			   "In the castle lived a mild-mannered computer programmer.2",
			   "The programmer was very lonely because his computer recently broke.3",
			   "The programmer opened the closet and saw a box from Amazon.5",
			   "One day the programmer came across a room with a closet.4" };

	char *para2 = "Once upon a time. There was a very tall castle. In the castle lived a mild-mannered computer programmer. The programmer was very lonely because his computer recently broke. One day the programmer came across a room with a closet. The programmer opened the closet and saw a box from Amazon.";

	ASSERT_EQ(0, strcmp(para2, makeParagraph(sents2, 6)));

	char *sents3[] = { "Never changes a thing.2",
		   "Does his teeth bite to eat and he's rolling.1",
		   "He wakes up in the morning.0",
		   "The week ends the week begins.3" };

	char *para3 = "He wakes up in the morning. Does his teeth bite to eat and he's rolling. Never changes a thing. The week ends the week begins.";

	ASSERT_EQ(0, strcmp(para3, makeParagraph(sents3, 4)));
}
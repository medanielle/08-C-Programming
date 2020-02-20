#include <gmock/gmock.h>


#include "TestCode.h"



TEST(TestCase2, stackTest_normalCases)
{
	int value = 0;
	int actions[] = { 2, 4, 2, 5, 2, 10 };
	struct numNode * res = createStack(actions, 3);
	int test[] = { 10, 5, 4 };
	if (res == NULL)
		ASSERT_EQ(1, 0); #res should not be NULL
	for (int i = 0; res != NULL; i++, res = res->next)
	{
		ASSERT_EQ(test[i], res->num);
	}
	int actions2[] = { 2, 4, 2, 5, 2, 10, 3, 0 };
	ASSERT_EQ(NULL, createStack(actions2, 4));
	int actions3[] = { 2, 7, 2, 4, 2, 5, 1, 0, 2, 10, 1, 0 };
	struct numNode * res2 = createStack(actions3, 6);
	if (res2 == NULL)
		ASSERT_EQ(1, 0); #res2 should not be NULL
	int test2[] = { 4, 7 };
	for (int i = 0; res2 != NULL; i++, res2 = res2->next)
	{
		ASSERT_EQ(test2[i], res2->num);
	}
	int actions4[] = { 2, 4, 2, 5, 2, 10, 1, 0, 1, 0, 1, 0 };
	ASSERT_EQ(NULL, createStack(actions4, 6));
	int actions5[] = { 2, 4, 2, 5, 2, 10, 1, 0, 1, 0, 1, 0, 2, 50 };
	struct numNode * res3 = createStack(actions5, 7);
	if (res3 == NULL)
		ASSERT_EQ(1, 0); #res3 should not be NULL
	int test3[] = { 50 };
	for (int i = 0; res3 != NULL; i++, res3 = res3->next)
	{
		ASSERT_EQ(test3[i], res3->num);
	}
}
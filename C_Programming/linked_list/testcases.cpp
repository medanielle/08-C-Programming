#include <gmock/gmock.h>


#include "TestCode.h"


	

TEST(TestCase1, checkNames)
{

	char *names[] = { "Joe","Ace","Gene","Paul","Peter","Hank","Timmy","Sarah","Alice","Carol" };
	char *names2[] = { "Ace","Alice","Carol","Gene","Hank","Joe","Paul","Peter","Sarah","Timmy" };
	struct nameNode *res = processNames(names);
	struct nameNode *head = res;
	int i = 0;
	while (res != NULL)
	{
		ASSERT_EQ(0, strcmp(res->name, names2[i]));

		res = res->next;
		i++;
	}
	freeMemory(head);
	char *names3[] = { "Jon","Arya","Sansa","Joffrey","Gregor","Cersei","Jamie","Brienne","Daenerys","Tyrion" };
	char *names4[] = { "Arya","Brienne","Cersei","Daenerys","Gregor","Jamie","Joffrey","Jon","Sansa","Tyrion" };
	res = processNames(names3);
	head = res;
	i = 0;
	while (res != NULL)
	{
		ASSERT_EQ(0, strcmp(res->name, names4[i]));

		res = res->next;
		i++;
	}
	freeMemory(head);
}






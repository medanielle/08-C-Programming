#include <gmock/gmock.h>


#include "TestCode.h"



TEST(TestCase2, writeTest_normalCases)
{
	
    char * fnames[] = {"george","john","millard","Theodore"};
    char * lnames[] = {"Washington", "adams","Filmore","roosevelt"};
    int res = writeNames(fnames, lnames, sizeof(fnames) / sizeof(*fnames), "names.txt");
	ASSERT_EQ(res, 1);
    FILE *fp;
	fp = fopen("names.txt", "r");

	if (fp != NULL)
	{
	    char * names[] = {"Washington, George\n","Adams, John\n","Filmore, Millard\n","Roosevelt, Theodore"};
        int count = 0;
        char tempBuff[150] = { 0 };
	    char * tempReturn = tempBuff;
	    
		while (tempReturn = fgets(tempBuff, 150, fp))
		{
			if (tempReturn)
			{
			    ASSERT_EQ(strcmp(names[count],tempReturn), 0);
			}
			count++;
		}
		fclose(fp);
	}
	else
	   ASSERT_EQ(1,0); // Unable to open file names.txt
	
	
	// EDGE CASES
    res = writeNames(fnames, lnames, 0, "sizeZero.txt");
	ASSERT_EQ(res, 0);
	fp = fopen("sizeZero.txt", "r");
	if (fp != NULL)
		ASSERT_EQ(1,0); // file should not exist
    res = writeNames(fnames, lnames, -2, "neg.txt");
	ASSERT_EQ(res, 0);
	fp = fopen("neg.txt", "r");
	if (fp != NULL)
		ASSERT_EQ(1,0); // file should not exist	
    char * fnames2[] = {"","green","Red","Brown"};
    res = writeNames(fnames2, lnames, 4, "noFirst.txt");
	ASSERT_EQ(res, 0);
	fp = fopen("noFirst.txt", "r");
	if (fp != NULL)
		ASSERT_EQ(1,0); // file should not exist
    char * lnames2[] = {"bonnet", "eyes","Rocket",""};	
    res = writeNames(fnames, lnames2, 4, "noLast.txt");
	ASSERT_EQ(res, 0);
	fp = fopen("noLast.txt", "r");
	if (fp != NULL)
		ASSERT_EQ(1,0); // file should not exist
}

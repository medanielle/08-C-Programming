#include <gmock/gmock.h>


#include "TestCode.h"



TEST(TestCase1, stringToDoubleTest_cornerCases)
{   	                
	char* stringlist[] = { NULL, "", ".", "+.", "-.", ".-", ".+", "..", "+-", "-+", "+", "-", " 0", "0 ", ".12.015", "..12015",".+05", "0", ".0", "0.", "0.0", "-111.-111", "-111-111", "111-111", "111+111" };

	ASSERT_EQ(ERROR_INVALID_PARAMETER, stringToDouble(stringlist[0]));	
	ASSERT_EQ(ERROR_INVALID_PARAMETER, stringToDouble(stringlist[1]));	
	ASSERT_EQ(ERROR_INVALID_PARAMETER, stringToDouble(stringlist[2]));	
	ASSERT_EQ(ERROR_INVALID_PARAMETER, stringToDouble(stringlist[3]));	
	ASSERT_EQ(ERROR_INVALID_PARAMETER, stringToDouble(stringlist[4]));	
	ASSERT_EQ(ERROR_INVALID_PARAMETER, stringToDouble(stringlist[5]));	
	ASSERT_EQ(ERROR_INVALID_PARAMETER, stringToDouble(stringlist[6]));	
	ASSERT_EQ(ERROR_INVALID_PARAMETER, stringToDouble(stringlist[7]));	
	ASSERT_EQ(ERROR_INVALID_PARAMETER, stringToDouble(stringlist[8]));	
	ASSERT_EQ(ERROR_INVALID_PARAMETER, stringToDouble(stringlist[9]));	
	ASSERT_EQ(ERROR_INVALID_PARAMETER, stringToDouble(stringlist[10]));	
	ASSERT_EQ(ERROR_INVALID_PARAMETER, stringToDouble(stringlist[11]));	
	ASSERT_EQ(ERROR_INVALID_PARAMETER, stringToDouble(stringlist[12]));	
	ASSERT_EQ(ERROR_INVALID_PARAMETER, stringToDouble(stringlist[13]));	
	ASSERT_EQ(ERROR_INVALID_PARAMETER, stringToDouble(stringlist[14]));
	ASSERT_EQ(ERROR_INVALID_PARAMETER, stringToDouble(stringlist[15]));
	ASSERT_EQ(ERROR_INVALID_PARAMETER, stringToDouble(stringlist[16]));
	ASSERT_EQ(0, stringToDouble(stringlist[17]));	
	ASSERT_EQ(0, stringToDouble(stringlist[18]));	
	ASSERT_EQ(0, stringToDouble(stringlist[19]));	
	ASSERT_EQ(0, stringToDouble(stringlist[20]));
	ASSERT_EQ(ERROR_INVALID_PARAMETER, stringToDouble(stringlist[21]));
	ASSERT_EQ(ERROR_INVALID_PARAMETER, stringToDouble(stringlist[22]));
	ASSERT_EQ(ERROR_INVALID_PARAMETER, stringToDouble(stringlist[23]));
	ASSERT_EQ(ERROR_INVALID_PARAMETER, stringToDouble(stringlist[24]));
	
}


TEST(TestCase2, stringToDoubleTest_normalCases)
{   	
	char* stringlist[] = {						  
						  "2",
						  "2.0",						  
						  "+2",
						  "+2.0",
						  "-2",
						  "-2.0",
						  "3975",
						  "3975.0",						  
						  "+3975",
						  "+3975.0",
						  "-3975",
						  "-3975.0",
						  "5867.456",						 
						  "+5867.456",
						  "-5867.456",
						  "8923.0046",						  
						  "+8923.0046",
						  "-8923.0046",
						  "0.458",						  
						  "+0.458",
						  "-0.458",
						  "+.725",
						  "-.725"
					     };

	ASSERT_EQ(2, stringToDouble(stringlist[0]));	
	ASSERT_EQ(2, stringToDouble(stringlist[1]));	
	ASSERT_EQ(2, stringToDouble(stringlist[2]));	
	ASSERT_EQ(2, stringToDouble(stringlist[3]));	
	ASSERT_EQ(-2, stringToDouble(stringlist[4]));	
	ASSERT_EQ(-2, stringToDouble(stringlist[5]));	
	ASSERT_EQ(3975, stringToDouble(stringlist[6]));
	ASSERT_EQ(3975, stringToDouble(stringlist[7]));
	ASSERT_EQ(3975, stringToDouble(stringlist[8]));
	ASSERT_EQ(3975, stringToDouble(stringlist[9]));
	ASSERT_EQ(-3975, stringToDouble(stringlist[10]));
	ASSERT_EQ(-3975, stringToDouble(stringlist[11]));
	ASSERT_EQ(5867.456, stringToDouble(stringlist[12]));
	ASSERT_EQ(5867.456, stringToDouble(stringlist[13]));
	ASSERT_EQ(-5867.456, stringToDouble(stringlist[14]));
	ASSERT_EQ(8923.0046, stringToDouble(stringlist[15]));
	ASSERT_EQ(8923.0046, stringToDouble(stringlist[16]));
	ASSERT_EQ(-8923.0046, stringToDouble(stringlist[17]));
	ASSERT_EQ(0.458, stringToDouble(stringlist[18]));
	ASSERT_EQ(0.458, stringToDouble(stringlist[19]));
	ASSERT_EQ(-0.458, stringToDouble(stringlist[20]));
	ASSERT_EQ(0.725, stringToDouble(stringlist[21]));
	ASSERT_EQ(-0.725, stringToDouble(stringlist[22]));

}


#include <gmock/gmock.h>

#include "TestCode.h"

SLIST_HEADER maskItemHeader;

TEST(TestSetFour, structureModTest_findMaskItem)
{
	std::pair<DWORD, DWORD> info;
	int tmpResult;
	initListProcessing();
	DWORD action = buildList(&maskItemHeader, info);
	ASSERT_NE(0, action);

	ASSERT_EQ(ERROR_SUCCESS, structureMod((PCONTAINER)&maskItemHeader.Next, info.first, info.second, &tmpResult));
	ASSERT_EQ(ERROR_SUCCESS, validatePair(info.second, tmpResult));

	gcList(&maskItemHeader);
	finishListProcessing();
}


SLIST_HEADER funcItemHeader;

TEST(TestSetFour, structureModTest_findFuncItem)
{
	std::pair<DWORD, DWORD> info;
	int tmpResult;
	initListProcessing();
	DWORD action = buildList(&funcItemHeader, info);
	ASSERT_NE(0, action);

	ASSERT_EQ(ERROR_SUCCESS, structureMod((PCONTAINER)&funcItemHeader.Next, info.first, info.second, &tmpResult));
	ASSERT_EQ(ERROR_SUCCESS, validatePair(info.second, tmpResult));

	gcList(&funcItemHeader);
	finishListProcessing();
}

SLIST_HEADER nonexistHeader;

TEST(TestSetFour, structureModTest_nonexist)
{
	std::pair<DWORD, DWORD> info;
	int tmpResult;
	initListProcessing();
	DWORD action = buildList(&nonexistHeader, info);
	ASSERT_NE(0, action);

	ASSERT_EQ(ERROR_NOT_FOUND, structureMod((PCONTAINER)&nonexistHeader.Next, 0xffffffff, info.second, &tmpResult));

	gcList(&nonexistHeader);
	finishListProcessing();;
}

SLIST_HEADER invalidHeader;

TEST(TestSetFour, structureModTest_invalidInput)
{
	std::pair<DWORD, DWORD> info;
	int tmpResult;
	initListProcessing();
	DWORD action = buildList(&invalidHeader, info);
	ASSERT_NE(0, action);

	ASSERT_EQ(ERROR_INVALID_PARAMETER, structureMod((PCONTAINER)&invalidHeader.Next, info.first, info.second, NULL));
	ASSERT_EQ(ERROR_INVALID_PARAMETER, structureMod(NULL, info.first, info.second, &tmpResult));

	gcList(&invalidHeader);
	finishListProcessing();
}
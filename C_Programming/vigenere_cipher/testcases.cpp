#include <gmock/gmock.h>


#include "TestCode.h"




TEST(TestCase1, encryptVigenereTest_cornerCases)
{
	char* plianTextList[] = {
							 NULL,
							 "",
							 "~!$23#-=/*?, < >",
							 " ",
							 "attack them tomorrow",
							 "ATTACK THEM TOMORROW"
	};

	ASSERT_EQ(NULL, encryptVigenere(plianTextList[0], "key"));
	ASSERT_EQ(NULL, encryptVigenere(plianTextList[1], "key"));
	ASSERT_EQ(0, strcmp("~!$23#-=/*?, < >", encryptVigenere(plianTextList[2], "key")));
	ASSERT_EQ(0, strcmp(" ", encryptVigenere(plianTextList[3], "key")));
	ASSERT_EQ(0, strcmp("attack them tomorrow", encryptVigenere(plianTextList[4], "a")));
	ASSERT_EQ(0, strcmp("attack them tomorrow", encryptVigenere(plianTextList[5], "a")));
	ASSERT_EQ(0, strcmp("attack them tomorrow", encryptVigenere(plianTextList[4], "A")));
	ASSERT_EQ(0, strcmp("attack them tomorrow", encryptVigenere(plianTextList[5], "A")));
}

TEST(TestCase1, encryptVigenereTest_normalCases)
{
	char* plianTextList[] = {
							 "launch the rocket",
							 " another secret message",
							 "A Third Secret Message! ",
							 "Message with number #123",
							 "we are discovered save yourself"
	};

	ASSERT_EQ(0, strcmp("tpmrep izi twrciv", encryptVigenere(plianTextList[0], "IPSEC")));
	ASSERT_EQ(0, strcmp(" icgxjmg kieztl qgahskg", encryptVigenere(plianTextList[1], "ipsec")));
	ASSERT_EQ(0, strcmp("i izmtl hwgtmi eiuapyi! ", encryptVigenere(plianTextList[2], "IPsec")));
	ASSERT_EQ(0, strcmp("utkwcot omvp cmqdmg #123", encryptVigenere(plianTextList[3], "IpSec")));
	ASSERT_EQ(0, strcmp("zi cvt wqngrzgvtw avzh cqyglmgj", encryptVigenere(plianTextList[4], "deceptive")));
}
#pragma once


#include <stdio.h>

#ifdef __cplusplus
extern "C" {
#endif
	unsigned int packCharacters(char ch4, char ch3, char ch2, char ch1);
	char* unpackCharacters(unsigned int pack);

#ifdef __cplusplus
}
#endif
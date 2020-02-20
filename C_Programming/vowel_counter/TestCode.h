#pragma once


#include <stdio.h>

struct Vowels {
	int aCount;
	int eCount;
	int iCount;
	int oCount;
	int uCount;
	int yCount;

};

#ifdef __cplusplus
extern "C" {
#endif
	// Task One
	int countVowels(char *text, struct Vowels* v);

#ifdef __cplusplus
}
#endif
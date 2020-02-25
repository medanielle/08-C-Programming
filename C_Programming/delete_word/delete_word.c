#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "TestCode.h"


/*
  For this task, you will receive two pointers to NULL terminated strings: 
		   a 'sentence', and a 'word'. The objective will be to delete (in place) the first 
		   occurrence of 'word' in the sentence. 

 Expected Return Values:
		- the task is successful: should return ERROR_SUCCESS (0).
		- provided parameters are bad: should return ERROR_INVALID_PARAMETER (87)
		- the provided 'word' is not part of 'sentence': should return ERROR_NOT_FOUND (1168)
*/


//int deleteWord(char* sentence, char* word)
//{
//}

int deleteWord(char * string, char * sub)
{
	if (string == NULL || sub == NULL){
		printf("Bad Input\n");
		return 0;
	}
	char *p;
	if ((p=strstr(string,sub)) != NULL)
	{
		memmove(p,p+strlen(sub), strlen(p+strlen(sub))+1);
	}
	else{
		printf("Nopes!\n");
	}
	puts(string);
	return 0;
}


int main(){
	char string3[] ="This is my brand new sentence";
    char substring3[] = " brand new";

	deleteWord(string3, substring3);

    char string[] = "this is a string";
    char substring[] = "this";
	
    deleteWord(string, substring);

	char string2[] ="this is also a string, unlike the first string";
	char substring2[] = "nope";

	deleteWord(string2, substring2);
	deleteWord(string3, NULL);
	deleteWord(NULL, string2);

    return 0;
}
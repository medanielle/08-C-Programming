#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h> 

/*
Write a function makeSentence that receives a char * array of characters that 
contain no spaces. Each capital letter in the string of charactrs represents a 
start of a word. The function should parse the string and create and return a 
new char * with spaces in between each word with only the first word capitalized. 
When complete, this will represent a sentence and should therefore end with a 
period unless the first word of the sentence begins with the word Who, What, 
Where, When, Why, or How. In this case, the sentence should end with a question 
mark.

For example:

ILikeCheese   should result in:  I like cheese.
WhereAreYou   should result in:  Where are you?
  
Assume that the provided string contains no spaces.

*/

#include <ctype.h> 

char* addPunc(char *str)
{
    char * copyNew = (char*)malloc((strlen(str)+1));; //= (char*)calloc(strlen(newSentence)+1, sizeof(char));
    strcpy(copyNew, str);
    char * first = strtok(copyNew, " ");
    // Who, What, Where, When, Why, or How
    if (strcmp("Who", first) == 0 || strcmp("What", first) == 0 || strcmp("Where", first) == 0 || strcmp("When", first) == 0 || strcmp("Why", first) == 0 || strcmp("How", first) == 0){
        strcat(str, "?");
    }
    else {
        strcat(str, ".");
    }
    return str;
}

char* makeSentence(char * str)
{
	char * newSentence;
	newSentence=(char*)malloc((strlen(str)+20));
    int i = 1,  count = 1;

	newSentence[0]= str[0];
    // DEBUG printf("%c", newSentence[0]);
    while (str[i] != '\0')
    {
        if (isupper(str[i])) { 
            
			newSentence[count] = ' ';
			count+=1;
			newSentence[count] = tolower(str[i]);
            // DEBUG printf(" %c", newSentence[count]);
        }
        else {
			newSentence[count] = str[i];
            // DEBUG printf("%c", newSentence[count]);

        }
        i++;
		count++;
        
    }
    newSentence[count] = '\0';
    // DEBUG printf("\n%s\n", newSentence);
    addPunc(newSentence);
	return newSentence;
}

/*
int main(){
	char string[] = "ILikeCheese";
	printf("%s\t%s\n", string, makeSentence(string));
	return 0;
}*/



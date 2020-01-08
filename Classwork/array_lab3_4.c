#include <stdio.h>
#include <stdlib.h>

// # define dataSize(x) sizeof(x)/sizeof(*x)
/*
1. #### Student ages

   1. ##### **Declare and zeroize an int array w ith a dimension equal to the number of students + 1**
   2. ##### **Set index 0 with the age\* of the instructor**
   3. ##### **Fill the elements of the array with the ages\* of the students starting with index 1**
   4. ##### **Print the array**
*/
int ages(){
    int all_ages[15] = {40};
    printf("Instructor: %d years old\n", all_ages[0]);
    int i = 1;
    for(i = 1; i < 15; i++){
        all_ages[i] = all_ages[i-1] - 1;
        printf("Student #%d: %d years old\n", i, all_ages[i]);
    }

    return 0;
}

/*
2. #### Favorite quote

   1. ##### **Declare and initialize a char array with your favorite saying**
   2. ##### **Ensure the last index is set to nul \('\0'\)**
   3. ##### **Separate each word in the array with a new line character \('\n' or decimal value 10\)**

**NOTE: \* use your best guess**

*/

int quote(){
    char phrase[] = "Its all good.";
    printf("%s\n", phrase);
    int i = 0;
    for( i = 0; i < sizeof(phrase)/sizeof(phrase[0]); i++ ){
        printf("%c or %d\n", phrase[i], (int)phrase[i]);
        if (phrase[i] == ' '){
            phrase[i] = '\n';
        }
    }
    for( i = 0; i < sizeof(phrase)/sizeof(phrase[0]); i++ ){
        printf("%c or %d\n", phrase[i], (int)phrase[i]);
    }

    return 0;
}

int lab3_ans(void)
{
	int classAges[12] = {24,26,28,22,29,24,30,35,33,39,34,29};

	char quoteArray[256] = {"The\ncake\nis\na\nlie"};
	quoteArray[256] = '\0';

	int counter = 0;

	while(counter < 12)
	{
		printf("%d \n", classAges[counter]);
		counter++;
	}

	printf("%s \n", quoteArray);

	return 0;
}
/*
# Lab 4: Strings

1. ### Declare and zeroize a char array with a dimension of 256
2. ### Assign your chosen phrase to the leading elements of that array
3. ### Explicitly verify your string is nul-terminated
4. ### Print your string

#### QUIZ: What is your string length?

~~EVIL:~~ Replace/remove/comment all null \('\0'\) characters and print the string

*/
#include <ctype.h>

int char_game(){
    char phrase[20] = "Yay Team!";
    printf("%s\n", phrase);
    phrase[9] = '\0';
    printf("#10 = _%c_ or %d\n", phrase[9], (int)phrase[9]);
    int i = 0;
    //for(i = 0; i < sizeof(phrase)/sizeof(phrase[0]); i++){
        //printf("%c or %d\n", phrase[i], (int)phrase[i]);
    while(phrase[i] != '\0'){
        i++;
    }

    printf("%s\n", phrase);
    printf("Length = %d", i);

    return 0;
}

int test_evil(){
    int i;
    char new_phrase[10] = "Yay!";
    for(i = 0; i < sizeof(new_phrase)/sizeof(new_phrase[0]); i++){
        printf("%c or %d\n", new_phrase[i], (int)new_phrase[i]);
        if(new_phrase[i] == 0){
            new_phrase[i] = 33;
        }
    }
    printf("\n----------------\n%s", new_phrase);
    for( i = 0; i < sizeof(new_phrase)/sizeof(new_phrase[0]); i++ ){
        printf("%c or %d\n", new_phrase[i], (int)new_phrase[i]);
    }

    return 0;
}

// #include<string.h>
// strcpy(variable, "WORDS AND THINGS!!!");

// printf("%lu", sizeof(array))

int main() 
{ 
    //ages();
    //quote();
    //char_game();
    //test_evil();
    return 0;
}
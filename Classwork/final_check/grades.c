
#include <stdio.h>
#include <math.h>
#include "TestCode.h"
#include <stdlib.h>


/*
In a computer programming course, a student’s overall score is computed as follows. The student takes four (4) quizzes, and six (6) projects,
a Midterm exam, and a Final Exam.

The student’s lowest project score is discarded therefore only including five (5) projects in the scoring.

Each score is in a range from 0 to 100.

Essentially, the overall score is computed using the values below as such:

Final – 30%
Midterm – 25%
quizzes – 5% each
Projects – 5% each

overallScore = final * .30 + midterm * .25 + quiz1 * .05 + quiz2 * 05 + ....etc……

Write a function computeScore that accepts the final exam score as an int, midterm exam score as an int, 
an array of six project scores as ints, and an array of four quiz scores as ints. The function should compute the 
floating point average of the student’s score, then round the score to the nearest integer and return it.


- If any score is < 0 or > 100, return ERROR_INVALID_DATA

*/

#define ERROR_INVALID_DATA -1

int * computeProject(int project[])
{
	int index, minimum =101;
   
    for (int c = 0; c < 6; c++)
    {
        if (project[c] < minimum)
        {
           minimum = project[c];
           index = c;
        }
    }
	printf("Minimum element is present at index %d and its value is %d.\n", index, minimum);
	
	for (int c = 0; c < 6; c++)
    {
        if (c == index)
        {
           project[c] = 0;
        }
    }
	return project;
}

int check_data(int arr[], int size){
	for (int i = 0; i< size; i++){
		if (arr[i]<0 || arr[i] > 100){
			return 1;
		}
	}
	return 0;
}

int computeScore(int final, int midTerm, int project[], int quiz[])
{
	if (final <0 || final > 100 || midTerm <0 || midTerm > 100 || check_data(project, 6) || check_data(quiz, 4)){
		return ERROR_INVALID_DATA;
	}
	computeProject(project);
	for(int i = 0; i < 6; i++){
		printf("%d, ", project[i]);
	}
	printf("\n");
	float overallScore = final * .30 + midTerm * .25 + quiz[0] * .05 + quiz[1] * .05 + quiz[2] * .05 + quiz[3] * .05 + project[0] * .05 + project[1] * .05 + project[2] * .05 + project[3] * .05+ project[4] * .05 + project[5] * .05;
	printf("float: %f\n", overallScore);
	//int rounded = round(overallScore);
	return round(overallScore); // 
}

int test1()
{
	int final[] = { 105, 89, 89 };
	int mid[] = { 89, -5, 90 };
	int quiz[][4] = { {80, 85, 95, -1 },
					{ 89, 89, 89, 89 },
					{ 89, 89, 89, 89 } };
	int proj[][6] = { { 88, 78, 98, 92, 70, 92 },
					 { 89, 89, 89, 89, 89, 89 },
					 { 89, 89, 89, 89, 101, 89 } };
	printf("Return: %d\n", computeScore(final[2], mid[2], proj[2], quiz[2])); //ERROR_INVALID_DATA, 
	printf("Return: %d\n", computeScore(final[2], mid[2], proj[1], quiz[0]));  //ERROR_INVALID_DATA, 
	printf("Return: %d\n", computeScore(final[0], mid[2], proj[0], quiz[2]));  //ERROR_INVALID_DATA, 
	printf("Return: %d\n", computeScore(final[2], mid[1], proj[0], quiz[2]));  //ERROR_INVALID_DATA, 
}


int test2(){
	int final[] = { 95, 89, 57 };
	int mid[] = {89, 89, 82};

	int proj[][6] = { { 88, 78, 98, 92, 70, 92 },
					 { 89, 89, 89, 89, 89, 89 },
					 { 77, 64, 54, 89, 90, 85 } };

	int quiz[][4] = { {80, 85, 95, 97 },
					{ 89, 89, 89, 89 },
					{ 74, 69, 80, 81 } };

	printf(" Return: %d\n", computeScore(final[0], mid[0], proj[0], quiz[0])); //ASSERT_EQ(91, 
	printf(" Return: %d\n", computeScore(final[1], mid[1], proj[1], quiz[1]));  //ASSERT_EQ(89, 
	printf(" Return: %d\n", computeScore(final[2], mid[2], proj[2], quiz[2]));  //ASSERT_EQ(73, 
}
int main(){
	test1();
	test2();
}
#include <stdio.h>
#include <stdlib.h>

int casting(){
    //declare and intialize the int, char, float, and double data types (<DATA TYPE> <VARIABLE NAME> = <INITAL VALUE>;)
    int integer = 36;
    float singleFloat = 2.22222;
    double doubleFloat = 3.3333333333;
    char singleChar = '$';
    // the number 33 will translate to '!' in ASCII
    char singleChar2 = 33;

    printf("\nint = %d \t=>\t float = %.6f\n", integer, (float)integer);
    printf("\nint = %d \t=>\t char = %c\n", integer, (char)integer);
    printf("\nchar = %c \t=>\t int = %d \n", singleChar, (int)singleChar);
    printf("\nfloat = %.6f \t=>\t double = %.11f \n", singleFloat, (double)singleFloat);
    printf("\ndouble = %.11f \t=>\t float = %.6f \n", doubleFloat, (float)doubleFloat);
    printf("\nint = %d \t=>\t char = %c\n", 33, (char)33);

}

int array_prac2(){
    // first
    int computerScienceCourses [] = {1003, 1023, 1033, 1063, 1073};
    int i = 0;
    printf("Computer Science Courses: \n");
    for (i = 0; i < 5; i++){
        printf("Index = %d, Value = %d\n", i , computerScienceCourses[i]);
    }
    printf("Dimension = %d\n", i);

    // second
    float studentGPAs [] = {2.7, 3.1, 2.9, 4, 3.9, 2.89, 3.55};
    printf("Student GPAs: \n");
    for (i = 0; i < 7; i++){
        printf("Index = %d, Value = %f\n", i , studentGPAs[i]);
    }
    printf("Dimension = %d\n", i);

    // third
    char cardinalDirections [4] = {78, 83, 'E', 'W'};
    printf("Cardinal Directions: \n");
    //cardinalDirections = ;
    for (i = 0; i < 4; i++){
        printf("Index = %d, Value = %d\n", i , (int)cardinalDirections[i]);
    }
    printf("Dimension = %d\n", i);
    

    // fourth
    char catchPhrase [10] = {76, 101, 103, 101, 111};
    printf("Catch Phrase: %s\n", catchPhrase);

    for (i = 0; i < 5; i++){
        printf("Index = %d, Value = %c\n", i , catchPhrase[i]);
    }
    printf("Dimension = %d\n", i);

    char catchPhrase2 [10] = {76, 101, 103, 101, 111, 46, 46, 46, 46};
    printf("Catch Phrase: %s\n", catchPhrase2);
    catchPhrase2 [5] = 100;
    printf("Catch Phrase: %s\n", catchPhrase2);

    return 0;

}

int array_prac3(){
	////////////////////////////////////////////////////////////////////////
	// Declare and initialize the following arrays:
	// Data Type	Name			Dimension	Initialize to:
	// ---------------------------------------------------------------------
	// int			myIntArray		10			100 (every index)
	// float		myFloatArray	5		    1 - 5
	// char			myCharArray		256			0
	////////////////////////////////////////////////////////////////////////
	int myIntArray[10] = { 100, 100, 100, 100, 100, 100, 100, 100, 100, 100 }; // Option #1
//	int myIntArray[] = { 100, 100, 100, 100, 100, 100, 100, 100, 100, 100 }; // Option #2
    printf("3rd Element: %d\n", myIntArray[2]);

	float myFloatArray[5] = { 1, 2, 3, 4, 5 }; // Option #1
//	float myFloatArray[] = { 1, 2, 3, 4, 5 }; // Option #2
    printf("3rd Element: %f\n", myFloatArray[2]);

	char myCharArray[256] = { 0 }; // Most efficient option
    printf("3rd Element: %d\n", myCharArray[2]);

    	////////////////////////////////////////////////////////////////////////
	// Perform the following manipulations on your arrays:
	// Array Name
	// ---------------------------------------------------------------------
	// myIntArray		Set all elements to x if y = index # and x = (y + 1) * 10
	// myFloatArray		Set all elements to x if y = value of the index and x = y * 1.1
	// myCharArray		Fill in the beginning elements with your last name starting with index 0
	////////////////////////////////////////////////////////////////////////
    int i = 0;
    printf("MY INT ARRAY\n");
    for (i = 0; i < 10; i++){
        myIntArray[i] = (i + 1) * 10;
        printf("Index = %d, Value = %d\n", i , myIntArray[i]);
    }

    int y = 0;
    printf("MY FLOAT ARRAY\n");
    for (i = 0; i < 5; i++){
        printf("Old Value = %f\n", myFloatArray[i]);
        y = myFloatArray[i];
        myFloatArray[i] = y * 1.1;
        // myFloatArray[i] *= 1.1;
        printf("Index = %d, Value = %.2f\n\n", i , myFloatArray[i]);
    }

    printf("MY CHAR ARRAY\n");
    char name[] = "Hughett";
    for (i = 0; i < 7; i++){
        myCharArray[i] = name[i];
        printf("Index = %d, Value = %c\n", i , myCharArray[i]);
    }

    return 0;
}

int array_create(){
    char myCharArray[256] = { 0 };
    printf("MY CHAR ARRAY\n");
    char new[] = "Hughett";
    int i = 0;
    for (i = 0; i < 7; i++){
        myCharArray[i] = new[i];
        printf("%c", myCharArray[i]);
    }
    new[4] = '!';
    printf("\n");
    for (i = 0; i < 7; i++){
        printf("%c", myCharArray[i]);
    }
    return 0;
}
//// PUTZ() !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!

int main()
{
    //casting();
    //array_prac2();
    //array_prac3();
    array_create();
    return 0;
}


/*
    int courseNums[8] = {101, 102, 103, 110, 202, 203, 210, 211};
    printf("%d\n", courseNums[7]);
    printf("%d\n", courseNums);
    courseNums[8] = 1000;
    printf("%d\n", courseNums[8]);
    */
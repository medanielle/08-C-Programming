//Performance Lab Exercises
/* 1.
Create a C program get gather input and display text implementing dynamic memory allocation functions
*/

/*C program to input and print text using Dynamic Memory Allocation.*/

#include <stdio.h>
#include <stdlib.h>

int dynamic_text()
{
    int n;
    char *text;
    
    printf("Enter limit of the text: ");
    scanf("%d",&n);
    
    /*allocate memory dynamically*/
    text=(char*)malloc(n*sizeof(char));
    
    printf("Enter text: ");
    scanf(" "); /*clear input buffer*/
    gets(text);
    
    printf("Inputted text is: %s\n",text);
    
    /*Free Memory*/
    free(text);
    
    return 0;
}

/* 2. 
PERFORMANCE LAB 2
Follow instructions below!
The basis of this lab is simple... allocate a section of memory that will
hold a string (your first name). Print the name out, then cleanup the memory and exit.
*/

//TODO: Include needed headers
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int re_alloc_test(void)
{
    //TODO: Create a string containing your first name
    char name[] = "Danielle";

    //TODO: Get the size of this string
    int len = strlen(name);
    printf("%s -- %d\n", name, len);

    //TODO: Declare a char pointer *str
    char *str;

    //TODO: Allocate a section of memory of type char
    //TODO: Set the size of this allocated space to 40 bytes
    //TODO: Asign the address of this allocated space to the pointer value
    str = (char*)malloc(40 * sizeof(char));


    //TODO: Copy your name into the allocated space using strcpy()
    strcpy(str, name);

    //TODO: Print out your name that is stored in the allocated memory space
    printf("40 bytes -- %s\n", str);

    //TODO: Reallocate the memory space using the size of the string rather than 40 bytes
    str = (char*)realloc(str, len+1);
    //TODO: Print out the string again
    printf("size of string -- %s\n", str);
    free(str);


}
/*  3.
Write a program that asks for the current temperature outside as a floating-point value. Have the code ask whether the input is Celsius or Fahrenheit. Use malloc() to create storage for the value input. Display the resulting temperature in Kelvin. Formula for conversion:
        kelvin = celsius + 273.15
        kelvin = (fahrenheit + 459.67) * (5.0/9.0);
*/

float Fahrenheit_to_Kelvin( float F ) 
{ 
    return 273.5 + ((F - 32.0) * (5.0/9.0)); 
} 

float Celsius_to_Kelvin( float F ) 
{ 
    return 273.5 + F; 
} 

int temp_test()
{
    char corf = '0';
    float temp;
    float * temp_ptr = (float *)malloc(sizeof(temp));

    printf("enter the temperature: ");
    scanf("%f", &temp);
    getchar();
    printf("is it Celcius or Fahrenheit?  (c/f): ");
    scanf("%c", &corf);

    //printf("temp = %.1f, %c", temp, corf);
    if (corf == 'c'){
        printf("Celsius: \n");
        printf("Temp in Kelvin: %.1f", Fahrenheit_to_Kelvin(temp));
    }
    else if (corf = 'f'){
        printf("Fahrenheit: \n");
        printf("Temp in Kelvin: %.1f",Celsius_to_Kelvin(temp));
    }
    else{
        printf("Please enter either c or f, thanks!");
    }
    free(temp_ptr);
}


/*  4.
Write a program that allocates space for three int values-- an array. You need to use only one malloc() function to accomplish this task. Assign 100, 200, and 300 to each int, and then display all three values.
*/

#include<stdio.h>  
#include<stdlib.h>  
int array_ex(){  
  int n,i,*ptr,sum=0;    
    printf("Enter number of elements: ");    
    scanf("%d",&n);    
    ptr=(int*)malloc(n*sizeof(int));  //memory allocated using malloc    
    if(ptr==NULL)                         
    {    
        printf("Sorry! unable to allocate memory");    
        exit(0);    
    }    
    printf("Enter elements of array: ");    
    for(i=0;i<n;++i)    
    {    
        scanf("%d\n", ptr+i);
        //sum+=*(ptr+i);    
    }    
    printf("Print new array:\n");
    //printf("Sum=%d",sum);    
    for(i=0;i<n;++i)    
    {    
        printf("%d\n", *(ptr+i));
    }    
    free(ptr);     
return 0;  
} 


/*  5.
Modify the source code below and create a second char buffer by using a pointer and malloc(). After text is read by the fgets() function, copy that text from the first buffer(input - from the code) into the second buffer, all the text except for the newline character, \n at the end of input.
*/
#include <stdio.h>
#include <stdlib.h>

int fix_me()
{
    char *input;

    input = (char *)malloc(sizeof(char)*1024);
    if(input==NULL)
    {
        puts("Unable to allocate buffer! Oh no!");
        exit(1);
    }
    puts("Type something long and boring:");
    fgets(input,1023,stdin);
    puts("You wrote:");
    printf("\"%s\"\n",input);

    return(0);
}
/*  6.
Change your solution from exercise 5, so that the second buffer contains a version of the text in the first buffer where all the vowels have been replaced with at-signs (@).
*/

int main()
{
    //dynamic_text();
    //re_alloc_test();
    //temp_test();
    array_ex();
}